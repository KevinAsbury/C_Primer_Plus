# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/day_mon1 day_mon1.c
win = -o day_mon1.exe day_mon1.c

ifeq ($(shell uname -s), Windows_NT)
day_mon1:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
day_mon1:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
day_mon1:
	$(CC) $(win)
else
day_mon1:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif