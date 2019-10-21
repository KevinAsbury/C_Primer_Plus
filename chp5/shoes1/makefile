# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/shoes1 shoes1.c
win = -o shoes1.exe shoes1.c

ifeq ($(shell uname -s), Windows_NT)
shoes1:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
shoes1:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
shoes1:
	$(CC) $(win)
else
shoes1:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif