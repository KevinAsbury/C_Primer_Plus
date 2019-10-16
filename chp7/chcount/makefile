# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/chcount chcount.c
win = -o chcount.exe chcount.c

ifeq ($(shell uname -s), Windows_NT)
chcount:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
chcount:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
chcount:
	$(CC) $(win)
else
chcount:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif