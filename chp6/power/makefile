# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/power power.c
win = -o power.exe power.c

ifeq ($(shell uname -s), Windows_NT)
power:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
power:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
power:
	$(CC) $(win)
else
power:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif