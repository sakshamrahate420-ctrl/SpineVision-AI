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

<svg viewBox="0 0 1200 300" xmlns="http://www.w3.org/2000/svg">
  <defs>
    <linearGradient id="bg" x1="0%" y1="0%" x2="100%" y2="100%">
      <stop offset="0%" stop-color="#0A0E14"/>
      <stop offset="100%" stop-color="#0D1420"/>
    </linearGradient>
    <linearGradient id="spineGrad" x1="0%" y1="0%" x2="0%" y2="100%">
      <stop offset="0%" stop-color="#E8EDF2"/>
      <stop offset="55%" stop-color="#4FD1C5"/>
      <stop offset="100%" stop-color="#2DD4BF"/>
    </linearGradient>
    <radialGradient id="glow" cx="50%" cy="50%" r="50%">
      <stop offset="0%" stop-color="#2DD4BF" stop-opacity="0.35"/>
      <stop offset="100%" stop-color="#2DD4BF" stop-opacity="0"/>
    </radialGradient>
  </defs>

  <rect width="1200" height="300" fill="url(#bg)"/>

  <!-- faint grid, restrained -->
  <g stroke="#141B25" stroke-width="1">
    <line x1="0" y1="60" x2="1200" y2="60"/>
    <line x1="0" y1="240" x2="1200" y2="240"/>
  </g>

  <!-- glow behind signature -->
  <circle cx="960" cy="150" r="170" fill="url(#glow)"/>

  <!-- Wordmark -->
  <g font-family="'Segoe UI', Helvetica, Arial, sans-serif">
    <text x="70" y="130" font-size="54" font-weight="700" letter-spacing="1" fill="#EDF1F5">Spine<tspan fill="#4FD1C5">Vision</tspan></text>
    <text x="72" y="165" font-size="17" letter-spacing="0.5" fill="#8A97A8">AI-assisted spinal MRI reporting</text>
  </g>

  <!-- eyebrow label -->
  <g font-family="'Consolas', 'SF Mono', monospace" fill="#5B6B7C">
    <text x="72" y="60" font-size="12" letter-spacing="3">SPINEVISION</text>
  </g>

  <!-- tag row: stack chips -->
  <g font-family="'Consolas', 'SF Mono', monospace" font-size="12" fill="#7C8AA0">
    <rect x="70" y="196" width="76" height="24" rx="4" fill="none" stroke="#26313F"/>
    <text x="83" y="212">Qt · C++</text>

    <rect x="156" y="196" width="92" height="24" rx="4" fill="none" stroke="#26313F"/>
    <text x="169" y="212">Python</text>

    <rect x="258" y="196" width="88" height="24" rx="4" fill="none" stroke="#26313F"/>
    <text x="271" y="212">Groq API</text>
  </g>

  <!-- SIGNATURE: vertebra stack dissolving into a node graph -->
  <g stroke="url(#spineGrad)" stroke-linecap="round">
    <!-- spinal curve guide -->
    <path d="M 960 40 C 940 90, 980 110, 960 150 C 945 185, 985 205, 965 250"
          fill="none" stroke="#1E2A38" stroke-width="10"/>

    <!-- vertebrae: rounded capsules along the curve, top = solid anatomy -->
    <rect x="936" y="42"  width="48" height="20" rx="9" fill="#EDF1F5" stroke="none"/>
    <rect x="928" y="66"  width="48" height="20" rx="9" fill="#D7EDEA" stroke="none"/>
    <rect x="944" y="90"  width="48" height="20" rx="9" fill="#B9E4DE" stroke="none"/>
    <rect x="952" y="114" width="46" height="19" rx="9" fill="#8FDBD0" stroke="none"/>
    <rect x="938" y="138" width="44" height="18" rx="8" fill="#63D0C2" stroke="none"/>

    <!-- transition: capsule breaking into nodes -->
    <rect x="928" y="161" width="36" height="15" rx="7" fill="#4FD1C5" opacity="0.85" stroke="none"/>
  </g>

  <!-- lower half: anatomy resolves into an analysis graph -->
  <g fill="#4FD1C5">
    <circle cx="948" cy="188" r="5"/>
    <circle cx="978" cy="196" r="4"/>
    <circle cx="936" cy="212" r="4.5"/>
    <circle cx="966" cy="222" r="3.5"/>
    <circle cx="944" cy="240" r="5"/>
    <circle cx="982" cy="238" r="3.5"/>
    <circle cx="958" cy="256" r="4"/>
  </g>
  <g stroke="#2DD4BF" stroke-width="1.4" opacity="0.75">
    <line x1="948" y1="188" x2="978" y2="196"/>
    <line x1="948" y1="188" x2="936" y2="212"/>
    <line x1="978" y1="196" x2="966" y2="222"/>
    <line x1="936" y1="212" x2="966" y2="222"/>
    <line x1="936" y1="212" x2="944" y2="240"/>
    <line x1="966" y1="222" x2="982" y2="238"/>
    <line x1="944" y1="240" x2="982" y2="238"/>
    <line x1="944" y1="240" x2="958" y2="256"/>
    <line x1="982" y1="238" x2="958" y2="256"/>
  </g>

  <!-- fine border -->
  <rect x="0.5" y="0.5" width="1199" height="299" fill="none" stroke="#1B2430"/>
</svg>
