# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/summing summing.c
win = -o summing.exe summing.c

ifeq ($(shell uname -s), Windows_NT)
summing:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
summing:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
summing:
	$(CC) $(win)
else
summing:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif