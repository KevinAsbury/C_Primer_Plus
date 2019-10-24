# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/swap3 swap3.c
win = -o swap3.exe swap3.c

ifeq ($(shell uname -s), Windows_NT)
swap3:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
swap3:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
swap3:
	$(CC) $(win)
else
swap3:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif