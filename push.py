#!/usr/bin/python
# push to github
import subprocess
import sys

if len(sys.argv) != 3:
    sys.exit("Usage: push <chapter#> <project name>")

chp = sys.argv[1]
proj = sys.argv[2]
cf = f"chp{chp}"

subprocess.run(["git", "add", "."])
subprocess.run(["git", "commit", "-m", f"\"{cf} {proj}\""])
subprocess.run(["git", "push", "-u", "origin", cf])
print("KevinAsbury")