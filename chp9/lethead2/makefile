# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/lethead2 lethead2.c
win = -o lethead2.exe lethead2.c

ifeq ($(shell uname -s), Windows_NT)
lethead2:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
lethead2:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
lethead2:
	$(CC) $(win)
else
lethead2:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif