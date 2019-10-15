# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/cypher1 cypher1.c
win = -o cypher1.exe cypher1.c

ifeq ($(shell uname -s), Windows_NT)
cypher1:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
cypher1:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
cypher1:
	$(CC) $(win)
else
cypher1:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif