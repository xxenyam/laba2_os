TARGET = task5
CC = gcc
CFLAGS = -Wall -Werror -std=c11
OBJS = main.o
$(TARGET):	$(OBJS)
	$(CC)	$(CFLAGS)	-o	$@	$^
%.o:	%.c
	$(CC)	$(CFLAGS)	-c	$<
clean:
	rm	-f	$(TARGET)	$(OBJS)

.PHONY: clean