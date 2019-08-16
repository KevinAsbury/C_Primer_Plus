# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=gcc
nix = -o squares squares.c
win = -o squares.exe squares.c

ifeq ($(shell uname -s), Windows_NT)
squares:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
squares:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
squares:
	$(CC) $(win)
else
squares:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif