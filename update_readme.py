import os
from datetime import datetime

folder = "."  # root folder

cpp_files = []
for root, _, files in os.walk(folder):
    for file in files:
        if file.endswith(".cpp"):
            cpp_files.append(os.path.join(root, file))

problem_count = len(cpp_files)
today = datetime.now().strftime("%Y-%m-%d")

new_line = f"| {today} | {problem_count} | Auto-updated by script |\n"

readme_path = "README.md"
if not os.path.exists(readme_path):
    print("README.md not found!")
    exit()

with open(readme_path, "r", encoding="utf-8") as f:
    lines = f.readlines()

progress_start = None
for i, line in enumerate(lines):
    if "| Date" in line and "| Problems Solved" in line:
        progress_start = i + 2
        break

if progress_start is None:
    print("Progress table not found in README.md")
    exit()

for i in range(progress_start, len(lines)):
    if lines[i].startswith(f"| {today}"):
        lines[i] = new_line
        break
else:
    lines.insert(progress_start, new_line)

with open(readme_path, "w", encoding="utf-8") as f:
    f.writelines(lines)

print(f"✅ README updated with today's progress: {problem_count} problems.")
