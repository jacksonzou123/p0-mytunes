#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "library.h"

void addsong(struct song_node **library, char *sartist, char *sname) {
  if (library) {
    if (sartist[0] - 97 >= 27 || sartist[0] - 97 < 0) {
        *(library + 26) = insert_inorder(*(library + 26), sartist, sname);
    }
    else {
      *(library + sartist[0] - 97) = insert_inorder(*(library + sartist[0] - 97), sartist, sname);
    }
  }
}

void printLibrary(struct song_node **library) {
  int i;
  for (i = 0; i<27; i++) {
    print_list(library[i]);
  }
}

struct song_node * findSong(struct song_node **library, char *sartist, char *sname) {
  if (library) {
    if (sartist[0] - 97 >= 27 || sartist[0] - 97 < 0) {
      return find_song(library[26], sartist, sname);
    }
    return find_song(library[sartist[0]-97], sartist, sname);
  }
}

void removeSong(struct song_node **library, char *sartist, char *sname) {
  if (library) {
    if (sartist[0] - 97 >= 27 || sartist[0] - 97 < 0) {
      library[26] = remove_node(library[26], sartist, sname);
    }
      library[sartist[0] - 97] = remove_node(library[sartist[0]-97], sartist, sname);
  }
}

void clearLibrary(struct song_node **library) {
  if (library) {
    int i;
    for (i = 0; i < 27; i++) {
      library[i] = free_list(library[i]);
    }
  }
}

struct song_node *findArtist(struct song_node **library, char *sartist) {
  if (library) {
    if (sartist[0] - 97 >= 27 || sartist[0] - 97 < 0) {
      return find_firstsong(library[26], sartist);
    }
      return find_firstsong(library[sartist[0] - 97], sartist);
  }
}
