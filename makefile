all: main.o songs.o
	gcc -o program main.o songs.o

main.o: main.c songs.h
	gcc -c main.c

songs.o: songs.c songs.h
	gcc -c songs.c
