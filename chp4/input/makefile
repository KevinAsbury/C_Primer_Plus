# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/input input.c
win = -o input.exe input.c

ifeq ($(shell uname -s), Windows_NT)
input:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
input:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
input:
	$(CC) $(win)
else
input:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif