# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/Praise2 Praise2.c
win = -o Praise2.exe Praise2.c

ifeq ($(shell uname -s), Windows_NT)
Praise2:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
Praise2:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
Praise2:
	$(CC) $(win)
else
Praise2:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif