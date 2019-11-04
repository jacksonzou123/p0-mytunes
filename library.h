#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//void addSong(struct song_node *snode, char *sartist, char *sname);

struct song_node ** addsong(struct song_node **snode, char *sartist, char *sname);

struct song_node ** printLibrary(struct song_node **snode);
