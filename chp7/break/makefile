# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/break break.c
win = -o break.exe break.c

ifeq ($(shell uname -s), Windows_NT)
break:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
break:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
break:
	$(CC) $(win)
else
break:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif