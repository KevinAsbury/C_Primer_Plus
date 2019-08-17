# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/posmod posmod.c
win = -o posmod.exe posmod.c

ifeq ($(shell uname -s), Windows_NT)
posmod:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
posmod:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
posmod:
	$(CC) $(win)
else
posmod:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif