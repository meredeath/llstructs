all: main.o linkedlist.o 
	gcc -o test main.o linkedlist.o

main.o: main.c linkedlist.h
	gcc -c main.c

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

run:
	./test

clean:
	rm *.o a.out test
	ls
