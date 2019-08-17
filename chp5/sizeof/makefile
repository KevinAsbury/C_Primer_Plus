# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/sizeof sizeof.c
win = -o sizeof.exe sizeof.c

ifeq ($(shell uname -s), Windows_NT)
sizeof:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
sizeof:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
sizeof:
	$(CC) $(win)
else
sizeof:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif