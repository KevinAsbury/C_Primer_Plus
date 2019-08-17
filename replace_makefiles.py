import os
import os.path
import subprocess
import sys

def project_name(s):
    return os.path.basename(os.path.dirname(s))

if len(sys.argv) != 2:
    sys.exit("Usage: python replace.py <sub directory name>")

for dirpath, dirnames, filenames in os.walk(sys.argv[1]):
    for filename in [f for f in filenames if f == "makefile"]:
        project = project_name(os.path.join(dirpath, filename))
        # subprocess.run(["cp", "-f", "build.bat", f"{sys.argv[1]}\\{project}"]) # Uncomment to use
        # subprocess.run(["cp", "-f", "build.sh", f"{sys.argv[1]}\\{project}"]) # Uncomment to use
        subprocess.run(["rm", "-f", "makefile"])
        out_file = open(f"{sys.argv[1]}\\{project}\\makefile", "w")
        subprocess.call(["sed", f"s/template/{project}/g", "makefiletemplate"], stdout=out_file)
