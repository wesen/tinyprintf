CC=gcc-4.7

all: test

%.o: %.c
	$(CC) -g3 -gdwarf-2  -c -o $@ $<

test: test.o printf.o
	$(CC) -g -o $@ $^

clean:
	- rm -f *.o test
