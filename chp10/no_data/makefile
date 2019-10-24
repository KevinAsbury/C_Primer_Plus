# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/no_data no_data.c
win = -o no_data.exe no_data.c

ifeq ($(shell uname -s), Windows_NT)
no_data:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
no_data:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
no_data:
	$(CC) $(win)
else
no_data:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif