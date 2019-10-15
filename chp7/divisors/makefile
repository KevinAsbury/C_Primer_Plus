# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/divisors divisors.c
win = -o divisors.exe divisors.c

ifeq ($(shell uname -s), Windows_NT)
divisors:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
divisors:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
divisors:
	$(CC) $(win)
else
divisors:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif