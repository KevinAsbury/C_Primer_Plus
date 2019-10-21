# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/width width.c
win = -o width.exe width.c

ifeq ($(shell uname -s), Windows_NT)
width:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
width:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
width:
	$(CC) $(win)
else
width:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif