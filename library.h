#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//void addSong(struct song_node *snode, char *sartist, char *sname);

void addsong(struct song_node **snode, char *sartist, char *sname);

void printLibrary(struct song_node **snode);

struct song_node * findSong(struct song_node **library, char *sartist, char *sname);

void removeSong(struct song_node **library, char *sartist, char *sname);

void clearLibrary(struct song_node **library);

struct song_node *findArtist(struct song_node **library, char *sartist);
