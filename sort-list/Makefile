CC = gcc

INCLUDES =

CFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = -g

LDLIBS = -lm

sort: sort.o

sort.o: sort.c

.PHONY: clean
clean:
	rm -f *.o *.a a.out sort

.PHONY: all
all: clean sort
