#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "library.h"

struct song_node ** addsong(struct song_node **snode, char *sartist, char *sname) {
  if (snode) {
    if (sartist[0] - 97 >= 27 || sartist[0] - 97 < 0) {
        *(snode + 27) = insert_inorder(*(snode + 27), sname, sartist);
    }
    else {
      *(snode + sartist[0] - 97) = insert_inorder(*(snode + sartist[0] - 97), sname, sartist);
    }
  }
  return snode;
}

struct song_node ** printLibrary(struct song_node **snode) {
  int i;
  for (i = 0; i<27; i++) {
    print_list(snode[i]);
  }
}
