CC=gcc
CFLAGS=-Wall

lab5: main.o buffer.o stack.o
	$(CC) $(CFLAGS) main.o buffer.o stack.o -o lab5

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

buffer.o: buffer.c
	$(CC) $(CFLAGS) -c buffer.c

stack.o: stack.c
	$(CC) $(CFLAGS) -c stack.c

clean:
	rm -rf *.o