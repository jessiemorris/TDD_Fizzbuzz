src=$(patsubst %.c,%.o,$(wildcard src/*.c))
tests=$(patsubst %.c,%.o,$(wildcard tests/*.c))
CC=gcc
CFLAGS=-I /usr/local/include -std=c99
FLAGS=`pkg-config --cflags --libs check`

build: $(src) $(tests)
	$(CC) -I-/usr/local/include $(CFLAGS) -o fizzbuzz $(src) $(tests) -lcheck $(FLAGS)

test: build
	./fizzbuzz

clean:
	rm -f fizzbuzz 
	rm -f *.o tests/*.o
