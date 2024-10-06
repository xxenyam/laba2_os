CC = gcc
CFLAGS = -Wall
TARGET = task3

all: $(TARGET)

$(TARGET): main.o
	$(CC)	$(CFLAGS)	-o	$(TARGET)	main.o

main.o: main.c
	$(CC)	$(CFLAGS)	-c main.c

clean:
	rm	-f	$(TARGET)	*.o
