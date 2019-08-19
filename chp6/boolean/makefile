# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/boolean boolean.c
win = -o boolean.exe boolean.c

ifeq ($(shell uname -s), Windows_NT)
boolean:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
boolean:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
boolean:
	$(CC) $(win)
else
boolean:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif