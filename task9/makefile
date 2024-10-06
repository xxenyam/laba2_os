CC = gcc
CFLAGS = -Wall -Wextra
TARGET = task9

all: $(TARGET)

$(TARGET): main.o
	$(CC)	$(CFLAGS)	-o	$(TARGET)	main.o

main.o: main.c
	$(CC)	$(CFLAGS)	-c	main.c

clean:
	rm	-f	*.o	$(TARGET)
