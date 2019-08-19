# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/zeno zeno.c
win = -o zeno.exe zeno.c

ifeq ($(shell uname -s), Windows_NT)
zeno:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
zeno:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
zeno:
	$(CC) $(win)
else
zeno:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif