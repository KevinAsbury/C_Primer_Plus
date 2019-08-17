# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/strings strings.c
win = -o strings.exe strings.c

ifeq ($(shell uname -s), Windows_NT)
strings:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
strings:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
strings:
	$(CC) $(win)
else
strings:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif