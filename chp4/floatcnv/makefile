# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/floatcnv floatcnv.c
win = -o floatcnv.exe floatcnv.c

ifeq ($(shell uname -s), Windows_NT)
floatcnv:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
floatcnv:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
floatcnv:
	$(CC) $(win)
else
floatcnv:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif