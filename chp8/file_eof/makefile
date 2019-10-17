# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/file_eof file_eof.c
win = -o file_eof.exe file_eof.c

ifeq ($(shell uname -s), Windows_NT)
file_eof:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
file_eof:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
file_eof:
	$(CC) $(win)
else
file_eof:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif