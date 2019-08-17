# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/shoes2 shoes2.c
win = -o shoes2.exe shoes2.c

ifeq ($(shell uname -s), Windows_NT)
shoes2:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
shoes2:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
shoes2:
	$(CC) $(win)
else
shoes2:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif