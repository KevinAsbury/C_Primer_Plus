# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/echo echo.c
win = -o echo.exe echo.c

ifeq ($(shell uname -s), Windows_NT)
echo:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
echo:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
echo:
	$(CC) $(win)
else
echo:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif