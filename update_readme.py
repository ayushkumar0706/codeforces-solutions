import os
from datetime import datetime

folder = "."  # Root folder
readme_path = "README.md"
last_run_file = ".last_cpp_list.txt"  # Stores the file list from last run

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

# Load previously tracked files
if os.path.exists(last_run_file):
    with open(last_run_file, "r", encoding="utf-8") as f:
        old_files = set(f.read().splitlines())
else:
    old_files = set()

# Find new files since last run
new_files = [f for f in cpp_files_today if f not in old_files]
problem_count = len(new_files)

if problem_count == 0:
    print("📭 No new problems found since last update.")
    exit()

# Prompt user to enter a note
notes = input("📝 Enter today's topics or notes (e.g., Greedy, DP): ")
new_line = f"| {today} | {problem_count} | {notes} |\n"

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

# Append the new line always (no overwrite)
lines.insert(progress_start, new_line)

# Save updated README.md
with open(readme_path, "w", encoding="utf-8") as f:
    f.writelines(lines)

# Save the new state of solved files
with open(last_run_file, "w", encoding="utf-8") as f:
    f.write("\n".join(cpp_files_today))

print(f"✅ README updated: {problem_count} new problem(s) solved today.")
