# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/showchar2 showchar2.c
win = -o showchar2.exe showchar2.c

ifeq ($(shell uname -s), Windows_NT)
showchar2:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
showchar2:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
showchar2:
	$(CC) $(win)
else
showchar2:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif