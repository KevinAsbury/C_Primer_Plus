# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/golf golf.c
win = -o golf.exe golf.c

ifeq ($(shell uname -s), Windows_NT)
golf:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
golf:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
golf:
	$(CC) $(win)
else
golf:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif