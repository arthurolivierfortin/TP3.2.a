CC = gcc
CFLAGS = -g -w -Wall
CXXFLAGS=-Ilib -Isrc -Itest
VPATH=lib:src:test
OBJ := exe

main: main.o util.o
	$(CC) $(CFLAGS) -o main main.o util.o -lm

test_unit: test_unit.o util.o
	$(CC) $(CFLAGS) -o test_unit test_unit.o util.o -lm

test_unit.o: ./test/test_unit.c ./test/test_unit.h
	$(CC) $(CFLAGS) -c ./test/test_unit.c -lm

util.o: ./src/util.h ./src/util.c
	$(CC) $(CFLAGS) -c ./src/util.c -o util.o -lm

main.o: ./src/util.h ./src/util.c ./src/main.c
	$(CC) $(CFLAGS) -c ./src/main.c -o main.o -lm

	

clean:
	rm -f *.o main test_unit