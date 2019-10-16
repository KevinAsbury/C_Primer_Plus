# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/paint paint.c
win = -o paint.exe paint.c

ifeq ($(shell uname -s), Windows_NT)
paint:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
paint:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
paint:
	$(CC) $(win)
else
paint:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif