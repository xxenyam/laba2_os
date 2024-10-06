CC = gcc
CFLAGS = -Wall

all: setenv putenv

setenv: setenv.o
	$(CC)	$(CFLAGS)	-o	setenv	setenv.o

putenv: putenv.o
	$(CC)	$(CFLAGS)	-o putenv	putenv.o

setenv.o: setenv.c
	$(CC)	$(CFLAGS)	-c	setenv.c

putenv.o: putenv.c
	$(CC)	$(CFLAGS)	-c putenv.c

clean:
	rm	-f	*.o	setenv	putenv
