# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/colddays colddays.c
win = -o colddays.exe colddays.c

ifeq ($(shell uname -s), Windows_NT)
colddays:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
colddays:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
colddays:
	$(CC) $(win)
else
colddays:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif