# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=gcc
nix = -o skip2 skip2.c
win = -o skip2.exe skip2.c

ifeq ($(shell uname -s), Windows_NT)
skip2:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
skip2:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
skip2:
	$(CC) $(win)
else
skip2:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif