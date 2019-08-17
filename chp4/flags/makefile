# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/flags flags.c
win = -o flags.exe flags.c

ifeq ($(shell uname -s), Windows_NT)
flags:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
flags:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
flags:
	$(CC) $(win)
else
flags:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif