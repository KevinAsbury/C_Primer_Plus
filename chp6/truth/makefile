# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/truth truth.c
win = -o truth.exe truth.c

ifeq ($(shell uname -s), Windows_NT)
truth:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
truth:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
truth:
	$(CC) $(win)
else
truth:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif