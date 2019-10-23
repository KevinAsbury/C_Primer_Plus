# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/binary binary.c
win = -o binary.exe binary.c

ifeq ($(shell uname -s), Windows_NT)
binary:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
binary:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
binary:
	$(CC) $(win)
else
binary:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif