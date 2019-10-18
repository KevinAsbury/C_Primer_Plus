# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/showchar1 showchar1.c
win = -o showchar1.exe showchar1.c

ifeq ($(shell uname -s), Windows_NT)
showchar1:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
showchar1:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
showchar1:
	$(CC) $(win)
else
showchar1:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif