TARGET = task1
CC = gcc
CFLAGS = -Wall -Wextra -lm
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
all: $(TARGET)
$(TARGET): $(OBJECTS)
	$(CC)	-o	$@	$^	$(CFLAGS)
%.o:	%.c
	$(CC)	$(CFLAGS)	-c	$<	-o	$@
clean:
	rm	-f	$(OBJECTS)	$(TARGET)
.PHONY: all clean