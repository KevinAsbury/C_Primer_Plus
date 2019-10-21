# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/running running.c
win = -o running.exe running.c

ifeq ($(shell uname -s), Windows_NT)
running:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
running:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
running:
	$(CC) $(win)
else
running:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif