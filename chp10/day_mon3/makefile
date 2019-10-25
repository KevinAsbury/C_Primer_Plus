# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/day_mon3 day_mon3.c
win = -o day_mon3.exe day_mon3.c

ifeq ($(shell uname -s), Windows_NT)
day_mon3:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
day_mon3:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
day_mon3:
	$(CC) $(win)
else
day_mon3:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif