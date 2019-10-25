# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/pnt_add pnt_add.c
win = -o pnt_add.exe pnt_add.c

ifeq ($(shell uname -s), Windows_NT)
pnt_add:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
pnt_add:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
pnt_add:
	$(CC) $(win)
else
pnt_add:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif