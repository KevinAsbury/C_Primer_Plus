# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/lethead1 lethead1.c
win = -o lethead1.exe lethead1.c

ifeq ($(shell uname -s), Windows_NT)
lethead1:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
lethead1:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
lethead1:
	$(CC) $(win)
else
lethead1:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif