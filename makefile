all: main.o songs.o list.o
	gcc -o program main.o songs.o

main.o: main.c songs.h list.h 
	gcc -c main.c

songs.o: songs.c songs.h
	gcc -c songs.c

list.o: list.c list.h songs.h
	gcc -c list.c
