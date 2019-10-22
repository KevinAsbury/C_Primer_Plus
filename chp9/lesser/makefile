# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/lesser lesser.c
win = -o lesser.exe lesser.c

ifeq ($(shell uname -s), Windows_NT)
lesser:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
lesser:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
lesser:
	$(CC) $(win)
else
lesser:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif