all: main.o linkedlist.o 
	gcc -o test main.o pokemon.o

main.o: main.c pokemon.h
	gcc -c main.c

pokemon.o: pokemon.c pokemon.h
	gcc -c pokemon.c
