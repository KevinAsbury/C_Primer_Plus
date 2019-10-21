# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/defines defines.c
win = -o defines.exe defines.c

ifeq ($(shell uname -s), Windows_NT)
defines:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
defines:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
defines:
	$(CC) $(win)
else
defines:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif