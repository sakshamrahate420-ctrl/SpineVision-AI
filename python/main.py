import sys
from ai_client import generate_report

def main():
    args = sys.argv
    if len(args) < 3:
        print("Error: Expected 2 arguments - MRI path and clinical notes")
        sys.exit(1)
    mri_path = args[1]
    clinical_notes = args[2]
    print("MRI Path:", mri_path)
    print("Clinical Notes:", clinical_notes)

  
    report = generate_report(mri_path, clinical_notes)
    print("AI Report:\n", report)

if __name__ == "__main__":
    main()