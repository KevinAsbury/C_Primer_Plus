# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/some_data some_data.c
win = -o some_data.exe some_data.c

ifeq ($(shell uname -s), Windows_NT)
some_data:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
some_data:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
some_data:
	$(CC) $(win)
else
some_data:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif