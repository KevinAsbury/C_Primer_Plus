# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/prntval prntval.c
win = -o prntval.exe prntval.c

ifeq ($(shell uname -s), Windows_NT)
prntval:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
prntval:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
prntval:
	$(CC) $(win)
else
prntval:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif