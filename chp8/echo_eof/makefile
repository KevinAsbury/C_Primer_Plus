# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/echo_eof echo_eof.c
win = -o echo_eof.exe echo_eof.c

ifeq ($(shell uname -s), Windows_NT)
echo_eof:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
echo_eof:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
echo_eof:
	$(CC) $(win)
else
echo_eof:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif