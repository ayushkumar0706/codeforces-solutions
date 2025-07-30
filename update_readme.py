import os
from datetime import datetime

folder = "."  # Root folder

cpp_files_today = []
today = datetime.now().date()

# Walk through all files and check .cpp files modified today
for root, _, files in os.walk(folder):
    for file in files:
        if file.endswith(".cpp"):
            full_path = os.path.join(root, file)
            modified_time = datetime.fromtimestamp(os.path.getmtime(full_path)).date()
            if modified_time == today:
                cpp_files_today.append(full_path)

problem_count = len(cpp_files_today)

# Prompt user to enter a note
notes = input("📝 Enter today's topics or notes (e.g., Greedy, DP): ")

new_line = f"| {today} | {problem_count} | {notes} |\n"

readme_path = "README.md"
if not os.path.exists(readme_path):
    print("README.md not found!")
    exit()

# Read the current README.md content
with open(readme_path, "r", encoding="utf-8") as f:
    lines = f.readlines()

# Find the start of the progress table
progress_start = None
for i, line in enumerate(lines):
    if "| Date" in line and "| Problems Solved" in line:
        progress_start = i + 2
        break

if progress_start is None:
    print("⚠️ Progress table not found in README.md")
    exit()

# Check if today's date already exists, and update that line
for i in range(progress_start, len(lines)):
    if lines[i].startswith(f"| {today}"):
        lines[i] = new_line
        break
else:
    lines.insert(progress_start, new_line)

# Save the updated README.md
with open(readme_path, "w", encoding="utf-8") as f:
    f.writelines(lines)

print(f"✅ README updated: {problem_count} problem(s) solved today.")
