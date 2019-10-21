# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/floats floats.c
win = -o floats.exe floats.c

ifeq ($(shell uname -s), Windows_NT)
floats:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
floats:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
floats:
	$(CC) $(win)
else
floats:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif