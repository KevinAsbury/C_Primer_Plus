# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/cmpflt cmpflt.c
win = -o cmpflt.exe cmpflt.c

ifeq ($(shell uname -s), Windows_NT)
cmpflt:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
cmpflt:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
cmpflt:
	$(CC) $(win)
else
cmpflt:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif