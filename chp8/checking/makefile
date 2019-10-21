# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/checking checking.c
win = -o checking.exe checking.c

ifeq ($(shell uname -s), Windows_NT)
checking:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
checking:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
checking:
	$(CC) $(win)
else
checking:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif