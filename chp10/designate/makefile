# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/designate designate.c
win = -o designate.exe designate.c

ifeq ($(shell uname -s), Windows_NT)
designate:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
designate:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
designate:
	$(CC) $(win)
else
designate:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif