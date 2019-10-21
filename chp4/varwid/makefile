# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/varwid varwid.c
win = -o varwid.exe varwid.c

ifeq ($(shell uname -s), Windows_NT)
varwid:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
varwid:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
varwid:
	$(CC) $(win)
else
varwid:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif