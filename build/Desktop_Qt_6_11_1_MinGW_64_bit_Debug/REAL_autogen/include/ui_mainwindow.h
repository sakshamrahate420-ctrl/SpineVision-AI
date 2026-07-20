/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *uploadbutton;
    QPushButton *pushButton_2;
    QLabel *statusbutton;
    QPushButton *analyzebutton;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(937, 719);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"    background:qlineargradient(\n"
"        x1:0,\n"
"        y1:0,\n"
"        x2:1,\n"
"        y2:1,\n"
"        stop:0 #020617,\n"
"        stop:0.25 #0B132B,\n"
"        stop:0.55 #1C2541,\n"
"        stop:1 #3A506B\n"
"    );\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        uploadbutton = new QPushButton(centralwidget);
        uploadbutton->setObjectName("uploadbutton");
        uploadbutton->setGeometry(QRect(390, 200, 141, 51));
        uploadbutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"    font-size:16px;\n"
"    font-weight:bold;\n"
"    border-radius:18px;\n"
"    border:none;\n"
"    padding:12px;\n"
"    background:qlineargradient(\n"
"        x1:0,y1:0,\n"
"        x2:1,y2:1,\n"
"        stop:0 #2563EB,\n"
"        stop:1 #7C3AED\n"
"    );\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background:qlineargradient(\n"
"        x1:0,y1:0,\n"
"        x2:1,y2:1,\n"
"        stop:0 #3B82F6,\n"
"        stop:1 #8B5CF6\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background:#1E40AF;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("QPushButton{"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        uploadbutton->setIcon(icon);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 570, 121, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background:#1E293B;\n"
"    color:white;\n"
"    border:2px solid #334155;\n"
"    border-radius:12px;\n"
"    padding:12px;\n"
"    font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background:#334155;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background:#475569;\n"
"}"));
        statusbutton = new QLabel(centralwidget);
        statusbutton->setObjectName("statusbutton");
        statusbutton->setGeometry(QRect(350, 260, 711, 31));
        statusbutton->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #DCEBFF;\n"
"    font-size: 12pt;\n"
"    font-weight: 600;\n"
"    background: transparent;\n"
"    padding: 4px;\n"
"}"));
        analyzebutton = new QPushButton(centralwidget);
        analyzebutton->setObjectName("analyzebutton");
        analyzebutton->setGeometry(QRect(370, 390, 181, 41));
        analyzebutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"    font-size:16px;\n"
"    font-weight:bold;\n"
"    border:none;\n"
"    border-radius:18px;\n"
"    padding:12px;\n"
"\n"
"    background:qlineargradient(\n"
"        x1:0,y1:0,\n"
"        x2:1,y2:1,\n"
"        stop:0 #059669,\n"
"        stop:1 #10B981\n"
"    );\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background:qlineargradient(\n"
"        x1:0,y1:0,\n"
"        x2:1,y2:1,\n"
"        stop:0 #10B981,\n"
"        stop:1 #34D399\n"
"    );\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 150, 821, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:#EAF4FF;\n"
"\n"
"font-size:14pt;\n"
"\n"
"font-weight:700;\n"
"\n"
"background:transparent;\n"
"\n"
"padding-left:5px;\n"
"\n"
"letter-spacing:1px;\n"
"\n"
"}"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(190, 460, 591, 192));
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"    background-color:#1E293B;\n"
"    color:white;\n"
"    border-radius:15px;\n"
"    border:2px solid #334155;\n"
"    padding:12px;\n"
"    font-size:15px;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 10, 511, 121));
        label_3->setStyleSheet(QString::fromUtf8("color:#E0F2FE;\n"
"font-size:32px;\n"
"font-weight:800;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(343, 300, 231, 75));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #1E293B;\n"
"    border: 2px solid #4F8EF7;\n"
"    border-radius: 15px;\n"
"    color: #F8FAFC;\n"
"    padding: 12px;\n"
"    font-size: 11pt;\n"
"    font-family: Segoe UI;\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border: 2px solid #63B3ED;\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 2px solid #7C3AED;\n"
"    background-color: #253247;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 0, 171, 131));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"background:qlineargradient(\n"
"x1:0,y1:0,x2:1,y2:0,\n"
"stop:0 #2C3E50,\n"
"stop:1 #34495E\n"
");\n"
"\n"
"color:white;\n"
"\n"
"border-radius:10px;\n"
"\n"
"padding:8px;\n"
"\n"
"font-size:13pt;\n"
"\n"
"font-weight:bold;\n"
"\n"
"}"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/saksh/Downloads/1f9e0-_2_.png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 937, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        uploadbutton->setText(QCoreApplication::translate("MainWindow", "Upload MRI", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        statusbutton->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#c6c6c6;\">Status :    No MRI selected......</span></p><p><br/></p></body></html>", nullptr));
        analyzebutton->setText(QCoreApplication::translate("MainWindow", "Analyze MRI", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#cacaca;\">AI-powered spinal MRI analysis systemdesigned to assist in identifying potential abnormalities from MRI scans. </span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#b4b4b4;\">SpineVision AI </span></p><p align=\"center\"><span style=\" color:#b4b4b4;\">AI-Powered Spinal MRI Analysis</span></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#bababa;\">Add some extra details for more accurate diagnosis.....</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#bababa;\"><br /></p></body></html>", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
