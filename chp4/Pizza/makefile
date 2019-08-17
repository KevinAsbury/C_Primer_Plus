# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/Pizza Pizza.c
win = -o Pizza.exe Pizza.c

ifeq ($(shell uname -s), Windows_NT)
Pizza:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
Pizza:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
Pizza:
	$(CC) $(win)
else
Pizza:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif