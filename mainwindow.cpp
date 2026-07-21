#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QfileDialog>
#include<QfileInfo>
#include<string>
#include<iostream>
#include<QString>
#include <QProcess>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_uploadbutton_clicked()
{
    fileName = QFileDialog::getOpenFileName(
        this,
        "Select MRI Scan",
        "",
        "MRI Files (*.nii *.nii.gz *.dcm *.png *.jpg *.jpeg *.webp);;All Files (*)"
        );
    if(fileName.isEmpty())
    {
        ui->statusbutton->setText("❌ No MRI Selected");
        return;
    }

    QFileInfo info(fileName);
    ui->statusbutton->setText("✅ Loaded: " + info.fileName());

}


void MainWindow::on_pushButton_2_clicked()
{
    fileName.clear();

    ui->statusbutton->setText("Status : No MRI Selected");

    ui->textEdit->clear();      // additional details

    ui->textBrowser->clear();   // output box
}


void MainWindow::on_analyzebutton_clicked()
{



        if(fileName.isEmpty())
        {
            ui->statusbutton->setText("Please upload MRI first!");
            return;
        }

        QString details = ui->textEdit->toPlainText();

        ui->textBrowser->setText(
            "===== MRI REPORT =====\n\n"
            "File:\n" + fileName +
            "\n\nAdditional Details:\n" + details +
            "\n\nAI Status:\nAnalyzing MRI..."
            );
        if (fileName.isEmpty()) {
            ui->statusbutton->setText("Error: No MRI file selected.");
            return;
        }

        QString clinicalNotes = ui->textEdit->toPlainText();

        QProcess process;
        QString pythonExe = "py";
        QStringList arguments;
        arguments << "E:/GUI/python/main.py" << fileName << clinicalNotes;

        process.start(pythonExe, arguments);

        if (!process.waitForStarted()) {
            ui->statusbutton->setText("Error: Failed to start Python process.");
            return;
        }
        process.waitForFinished(-1);

        QByteArray rawOutput = process.readAllStandardOutput();
        QByteArray rawError = process.readAllStandardError();

        QString output = QString::fromUtf8(rawOutput);
        QString errors = QString::fromUtf8(rawError);
 
        if (!errors.isEmpty()) {
         qDebug() << errors;
        }

        ui->textBrowser->setPlainText(output);
}

