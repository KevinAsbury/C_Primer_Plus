# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/wheat wheat.c
win = -o wheat.exe wheat.c

ifeq ($(shell uname -s), Windows_NT)
wheat:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
wheat:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
wheat:
	$(CC) $(win)
else
wheat:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif