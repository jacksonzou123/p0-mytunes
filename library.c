#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
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
  for (i = 0; i < 27; i++) {
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

void searchLetter(struct song_node **library, char c) {
  if (library) {
    if (c - 97 >= 27 || c - 97 < 0) {
      print_list(*(library + 27));
    }
    else {
      print_list(*(library + c - 97));
    }
  }
}

void searchArtist(struct song_node **library, char *sartist) {
  if (library) {
    struct song_node *list = NULL;
    struct song_node *p;
    if (sartist[0] - 97 >= 27 || sartist[0] - 97 < 0) {
      p = library[27];
    }
    else {
      p = library[sartist[0] - 97];
    }
    while (p) {
      if (!strcmp(p->artist,sartist)) {
        list = insert_inorder(list, p->artist, p->name);
      }
      p = p->next;
    }
    print_list(list);
  }
}

void shuffle(struct song_node **library) {
  srand(time(NULL));
  struct song_node *list = NULL;
  struct song_node *p = NULL;
  int i = 0;
  while (i < 10) {
    int r1 = rand()%27;
    int x = 0;
    p = library[r1];
    while (p) {
      x++;
      p = p->next;
    }
    if (x > 0){
      p = library[r1];
      int r2 = rand()%x;
      while (r2 > 0) {
        p = p->next;
        r2--;
      }
      list = insert_front(list, p->artist, p->name);
      i++;
    }
  }
  print_list(list);

}
