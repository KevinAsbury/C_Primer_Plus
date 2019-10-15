# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/electric electric.c
win = -o electric.exe electric.c

ifeq ($(shell uname -s), Windows_NT)
electric:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
electric:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
electric:
	$(CC) $(win)
else
electric:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif