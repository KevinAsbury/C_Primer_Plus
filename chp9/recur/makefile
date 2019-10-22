# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/recur recur.c
win = -o recur.exe recur.c

ifeq ($(shell uname -s), Windows_NT)
recur:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
recur:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
recur:
	$(CC) $(win)
else
recur:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif