<p align="center">
  <img src="assets/banner.png" alt="SpineVision AI Banner" width="100%">
</p>

<h1 align="center">🧠 SpineVision AI</h1>

<p align="center">
AI-Powered Spinal MRI Analysis using C++, Qt & Python
</p>


# SpineVision-AI
SpineVision AI is a desktop app demonstrating C++ (Qt) frontend integration with a Python AI backend using QProcess (no servers/databases). Users upload MRIs and notes; the app passes data to a vision LLM via Groq API to return structured radiology-style reports. Built as an educational pattern, not a diagnostic tool.
# SpineVision AI 🩺

SpineVision AI is a desktop application that demonstrates how a traditional C++ desktop frontend can be integrated with a modern AI backend to produce structured, readable output from unstructured medical imaging and clinical text.

## 🚀 Features
* **Native C++ Frontend:** Built entirely in Qt Creator for a smooth, responsive desktop user interface.
* **Process-Based Communication:** Uses `QProcess` to easily connect the Qt frontend to a Python subprocess without heavy databases or servers.
* **AI-Powered Analysis:** Leverages a vision-capable LLM via the **Groq API** to process MRI images and clinical notes.
* **Structured Output:** Automatically formats raw AI responses into clean, professional, radiology-style reports.

## 🛠️ Tech Stack
* **Frontend:** C++, Qt Creator
* **Backend:** Python
* **AI Model:** Groq API (Vision-Language Model)

## ⚠️ Disclaimer
This project is an educational demonstration of AI integration patterns, **not a diagnostic medical tool**. The AI-generated reports are explicitly labeled as non-diagnostic and are not a substitute for professional radiological evaluation.


