import os
import sys

arg = [None,None,None]
try:
    arg = sys.argv
except:
    None

if (arg[1] == "compile" or arg[1] == "install-all"):
    os.system("gcc main.c -o quickmen.bin -lncurses");
if (arg[1] == "install" or arg[1] == "install-all"):
    os.system("ln -s $(pwd)/quickmen.bin /usr/local/bin/quickmen")

if (arg[1] == "remove"):
    os.system("rm /usr/local/bin/quickmen")