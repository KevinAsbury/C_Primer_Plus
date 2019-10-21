# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/menuette menuette.c
win = -o menuette.exe menuette.c

ifeq ($(shell uname -s), Windows_NT)
menuette:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
menuette:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
menuette:
	$(CC) $(win)
else
menuette:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif