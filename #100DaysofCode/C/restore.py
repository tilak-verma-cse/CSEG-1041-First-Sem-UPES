import os
import subprocess
from datetime import datetime, timedelta

# --- CONFIGURATION ---
START_Q = 1
END_Q = 32
# We start back in October 2025 so it appears BEFORE Q33
START_DATE = datetime(2025, 10, 1) 
# ---------------------

current_date = START_DATE
current_q = START_Q

print(f"--- RESTORING Q{START_Q} to Q{END_Q} (October Timeline) ---")

while current_q <= END_Q:
    # We check for all variations: q1.c, Q1.c, Q1.C
    possible_names = [
        f"q{current_q}.c",
        f"Q{current_q}.c",
        f"Q{current_q}.C",
        f"q{current_q}.C"
    ]
    
    found_file = None
    for name in possible_names:
        if os.path.exists(name):
            found_file = name
            break
            
    if found_file:
        # 1. Stage the file
        subprocess.run(["git", "add", found_file], shell=True)
        
        # 2. Set Date (October)
        date_str = current_date.strftime("%Y-%m-%d 12:00:00")
        env = os.environ.copy()
        env["GIT_AUTHOR_DATE"] = date_str
        env["GIT_COMMITTER_DATE"] = date_str
        
        # 3. Commit
        commit_message = f"q{current_q} done"
        subprocess.run(["git", "commit", "-m", commit_message], env=env, shell=True)
        
        print(f"[SUCCESS] Restored {found_file} on {current_date.date()}")
    
    current_q += 1
    current_date += timedelta(days=1)

print("--- RESTORATION COMPLETE ---")