CFLAGS = -Wall
CC = gcc

OBJDIR = objects
BINDIR = bin
SCR = $(wildcard *.c)
OBJ = $(patsubst %.c, $(OBJDIR)/%.o, $(SRC))

all: binfolder objfolder bin/main

bin/main: $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $@

binfolder:
	mkdir -p $(BINDIR)

objfolder:
	mkdir -p $(OBJDIR)

objects/main.o: main.c
	$(CC) $(CCFLAGS) -c $< -o $@

objects/%.o: %.c %.h
	$(CC) $(CCFLAGS) -c $< -o $@

run:
	./bin/main

.PHONY: clean

clear:
	rm bin/* objects/*
	rmdir bin objects 