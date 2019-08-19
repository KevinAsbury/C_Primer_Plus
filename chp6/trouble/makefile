# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/trouble trouble.c
win = -o trouble.exe trouble.c

ifeq ($(shell uname -s), Windows_NT)
trouble:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
trouble:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
trouble:
	$(CC) $(win)
else
trouble:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif