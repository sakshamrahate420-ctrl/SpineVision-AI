import re
import base64
from groq import Groq
from config import GROQ_API_KEY

client = Groq(api_key=GROQ_API_KEY)

def encode_image(image_path):
    with open(image_path, "rb") as image_file:
        return base64.b64encode(image_file.read()).decode("utf-8")

def strip_think_blocks(text):
    return re.sub(r"<think>.*?</think>", "", text, flags=re.DOTALL).strip()

def build_prompt(clinical_notes):
    return f"""You are assisting with a non-diagnostic AI report for a spine MRI, for an educational software project.

Patient clinical notes: {clinical_notes}

Analyze the MRI image and respond STRICTLY in this exact format, with no extra commentary before or after it, and no internal reasoning shown:

====================================================
🧠 SPINEVISION AI MEDICAL REPORT
====================================================
Patient Notes
--------------------------------
{clinical_notes}

Image Findings
--------------------------------
- <finding 1>
- <finding 2>
- <finding 3>

Radiology Impression
--------------------------------
<2-4 sentence summary>

Possible Diagnoses
--------------------------------
- <diagnosis 1>
- <diagnosis 2>

Confidence
--------------------------------
<High / Medium / Low>

Recommendation
--------------------------------
<recommendation>
----------------------------------------------------
⚠ AI-assisted report.
This is NOT a medical diagnosis.
Please consult a qualified radiologist.
----------------------------------------------------

Rules:
- If the image quality is poor or a finding is uncertain, explicitly say so instead of guessing.
- Never invent findings that aren't visibly supportable.
- Keep the entire report under 300 words.
- Use bullet points for findings and diagnoses, not paragraphs.
"""

def generate_report(mri_path, clinical_notes):
    base64_image = encode_image(mri_path)

    response = client.chat.completions.create(
        model="qwen/qwen3.6-27b",
        messages=[
            {
                "role": "user",
                "content": [
                    {
                        "type": "text",
                        "text": build_prompt(clinical_notes)
                    },
                    {
                        "type": "image_url",
                        "image_url": {
                            "url": f"data:image/jpeg;base64,{base64_image}"
                        }
                    }
                ]
            }
        ]
    )

    raw_text = response.choices[0].message.content
    clean_text = strip_think_blocks(raw_text)
    return clean_text