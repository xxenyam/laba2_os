OUTPUT = task2
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = main.c
all: $(OUTPUT)
$(OUTPUT):	$(SRC)
	$(CC)	$(CFLAGS)	-o	$(OUTPUT)	$(SRC)
clean:
	rm	-f	$(OUTPUT)