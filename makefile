all: main.o linkedlist.o library.o
	gcc -o program main.o linkedlist.o library.o

main.o: main.c linkedlist.h library.h
	gcc -c main.c

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

library.o: library.c library.h linkedlist.h
	gcc -c library.c
