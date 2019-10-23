# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/factor factor.c
win = -o factor.exe factor.c

ifeq ($(shell uname -s), Windows_NT)
factor:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
factor:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
factor:
	$(CC) $(win)
else
factor:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif