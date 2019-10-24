# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/loccheck loccheck.c
win = -o loccheck.exe loccheck.c

ifeq ($(shell uname -s), Windows_NT)
loccheck:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
loccheck:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
loccheck:
	$(CC) $(win)
else
loccheck:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif