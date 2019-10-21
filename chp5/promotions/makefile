# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/promotions promotions.c
win = -o promotions.exe promotions.c

ifeq ($(shell uname -s), Windows_NT)
promotions:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
promotions:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
promotions:
	$(CC) $(win)
else
promotions:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif