src=$(patsubst %.c,%.o,$(wildcard *.c))
tests=$(patsubst %.c,%.o,$(wildcard *.c))
CC=gcc
CFLAGS=-std=c99
FLAGS=`pkg-config --cflags --libs check`

build: $(src) $(tests)
	$(CC) $(CFLAGS) -o fizzbuzz $(src) $(tests) -lcheck $(FLAGS)

test: build
	./fizzbuzz

clean:
	rm -f fizzbuzz 
	rm -f *.o tests/*.o
