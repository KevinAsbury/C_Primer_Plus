# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/vowels vowels.c
win = -o vowels.exe vowels.c

ifeq ($(shell uname -s), Windows_NT)
vowels:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
vowels:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
vowels:
	$(CC) $(win)
else
vowels:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif