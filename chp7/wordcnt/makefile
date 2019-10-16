# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/wordcnt wordcnt.c
win = -o wordcnt.exe wordcnt.c

ifeq ($(shell uname -s), Windows_NT)
wordcnt:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
wordcnt:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
wordcnt:
	$(CC) $(win)
else
wordcnt:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif