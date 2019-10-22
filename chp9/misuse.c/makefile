# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/misuse.c misuse.c.c
win = -o misuse.c.exe misuse.c.c

ifeq ($(shell uname -s), Windows_NT)
misuse.c:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
misuse.c:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
misuse.c:
	$(CC) $(win)
else
misuse.c:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif