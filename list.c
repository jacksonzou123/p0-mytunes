#include <stdio.h>
#include <stdlib.h>
#include "songs.h"
#include "list.h"

struct song_node ** addSong(struct song_node **snode, char *sartist, char *sname) {
  if (snode) {
    *(snode + sartist[0] - 97) = insert_inorder(*(snode + sartist[0] - 97), sartist, sname);
  }
  return snode;
}
