# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/guess guess.c
win = -o guess.exe guess.c

ifeq ($(shell uname -s), Windows_NT)
guess:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
guess:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
guess:
	$(CC) $(win)
else
guess:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif