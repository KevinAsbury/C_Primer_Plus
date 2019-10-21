# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/longstrg longstrg.c
win = -o longstrg.exe longstrg.c

ifeq ($(shell uname -s), Windows_NT)
longstrg:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
longstrg:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
longstrg:
	$(CC) $(win)
else
longstrg:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif