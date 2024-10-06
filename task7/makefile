CC = gcc
CFLAGS = -Wall -Wextra

all: task7

task7: main.o
	$(CC)	$(CFLAGS)	-o task7	main.o

main.o: main.c
	$(CC)	$(CFLAGS)	-c main.c

clean:
	rm	-f	*.o	task7
