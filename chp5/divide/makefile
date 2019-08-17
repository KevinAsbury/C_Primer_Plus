# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/divide divide.c
win = -o divide.exe divide.c

ifeq ($(shell uname -s), Windows_NT)
divide:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
divide:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
divide:
	$(CC) $(win)
else
divide:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif