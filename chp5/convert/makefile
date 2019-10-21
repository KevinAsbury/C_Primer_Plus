# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/convert convert.c
win = -o convert.exe convert.c

ifeq ($(shell uname -s), Windows_NT)
convert:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
convert:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
convert:
	$(CC) $(win)
else
convert:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif