# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/animals animals.c
win = -o animals.exe animals.c

ifeq ($(shell uname -s), Windows_NT)
animals:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
animals:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
animals:
	$(CC) $(win)
else
animals:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif