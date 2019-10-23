# Use GNU make from CygWin or MinGW if on Windows
# @echo $(shell uname -s)
CC=clang
nix = -o bin/usehotel usehotel.c hotel.c
win = -o usehotel.exe usehotel.c hotel.c

ifeq ($(shell uname -s), Windows_NT)
usehotel:
	$(CC) $(win)
else ifeq ($(shell uname -s), CYGWIN_NT-10.0)
usehotel:
	$(CC) $(win)
else ifeq ($(shell uname -s), MINGW32_NT-6.2)
usehotel:
	$(CC) $(win)
else
usehotel:
	@echo $(shell uname -s)
	$(CC) $(nix)
endif