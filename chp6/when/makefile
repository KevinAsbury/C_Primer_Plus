# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/when when.c
win = -o when.exe when.c

ifeq ($(shell uname -s), Windows_NT)
when:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
when:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
when:
	$(CC) $(win)
else
when:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif