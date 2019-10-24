# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/bounds bounds.c
win = -o bounds.exe bounds.c

ifeq ($(shell uname -s), Windows_NT)
bounds:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
bounds:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
bounds:
	$(CC) $(win)
else
bounds:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif