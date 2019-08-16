# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=gcc
nix = -o min_sec min_sec.c
win = -o min_sec.exe min_sec.c

ifeq ($(shell uname -s), Windows_NT)
min_sec:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
min_sec:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
min_sec:
	$(CC) $(win)
else
min_sec:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif