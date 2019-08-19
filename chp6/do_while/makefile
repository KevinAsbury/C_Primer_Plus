# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/do_while do_while.c
win = -o do_while.exe do_while.c

ifeq ($(shell uname -s), Windows_NT)
do_while:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
do_while:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
do_while:
	$(CC) $(win)
else
do_while:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif