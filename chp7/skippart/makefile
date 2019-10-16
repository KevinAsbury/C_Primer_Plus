# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/skippart skippart.c
win = -o skippart.exe skippart.c

ifeq ($(shell uname -s), Windows_NT)
skippart:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
skippart:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
skippart:
	$(CC) $(win)
else
skippart:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif