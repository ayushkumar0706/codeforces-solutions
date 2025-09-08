import os
from datetime import datetime

folder = "."  # Root folder
readme_path = "README.md"

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

total_today = len(cpp_files_today)

if total_today == 0:
    print("📭 No problems solved today.")
    exit()

# Read the current README.md content
if not os.path.exists(readme_path):
    print("README.md not found!")
    exit()

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

# Calculate how many problems have already been counted today
counted_today = 0
for i in range(progress_start, len(lines)):
    if lines[i].startswith(f"| {today}"):
        try:
            counted_today += int(lines[i].split("|")[2].strip())
        except ValueError:
            pass

# Calculate new problems since last update
new_problems = total_today - counted_today

if new_problems <= 0:
    print("📭 No new problems since last update.")
    exit()

# Prompt user to enter a note
notes = input("📝 Enter today's topics or notes (e.g., Greedy, DP): ")

# Add new entry
new_line = f"| {today} | {new_problems} | {notes} |\n"
lines.insert(progress_start, new_line)

# Save updated README.md
with open(readme_path, "w", encoding="utf-8") as f:
    f.writelines(lines)

print(f"✅ README updated: {new_problems} new problem(s) solved today.")