# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/rain rain.c
win = -o rain.exe rain.c

ifeq ($(shell uname -s), Windows_NT)
rain:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
rain:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
rain:
	$(CC) $(win)
else
rain:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif