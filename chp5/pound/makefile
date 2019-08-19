# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/pound pound.c
win = -o pound.exe pound.c

ifeq ($(shell uname -s), Windows_NT)
pound:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
pound:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
pound:
	$(CC) $(win)
else
pound:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif