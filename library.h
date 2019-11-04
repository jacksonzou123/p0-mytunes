#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void addsong(struct song_node **library, char *sartist, char *sname);

void printLibrary(struct song_node **snode);

struct song_node * findSong(struct song_node **library, char *sartist, char *sname);

void removeSong(struct song_node **library, char *sartist, char *sname);

void clearLibrary(struct song_node **library);

struct song_node *findArtist(struct song_node **library, char *sartist);

void searchLetter(struct song_node **library, char c);

void searchArtist(struct song_node **library, char *sartist);

void shuffle(struct song_node **library);
