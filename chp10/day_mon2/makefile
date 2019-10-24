# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/day_mon2 day_mon2.c
win = -o day_mon2.exe day_mon2.c

ifeq ($(shell uname -s), Windows_NT)
day_mon2:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
day_mon2:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
day_mon2:
	$(CC) $(win)
else
day_mon2:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif