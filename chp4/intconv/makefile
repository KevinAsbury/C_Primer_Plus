# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=gcc
nix = -o intconv intconv.c
win = -o intconv.exe intconv.c

ifeq ($(shell uname -s), Windows_NT)
intconv:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
intconv:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
intconv:
	$(CC) $(win)
else
intconv:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif