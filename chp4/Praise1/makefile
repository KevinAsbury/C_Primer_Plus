# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/Praise1 Praise1.c
win = -o Praise1.exe Praise1.c

ifeq ($(shell uname -s), Windows_NT)
Praise1:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
Praise1:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
Praise1:
	$(CC) $(win)
else
Praise1:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif