#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "linkedlist.h"
#include "library.h"

void addsong(struct song_node **library, char *sartist, char *sname) {
  if (library) {
    if (sartist[0] - 97 >= 27 || sartist[0] - 97 < 0) {
        *(library + 27) = insert_inorder(*(library + 27), sartist, sname);
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
    if (sartist[0] - 97 >= 27 || sartist[0] - 97< 0) {
      p = *(library + 27);
    }
    else {
      p = *(library + (sartist[0] - 97));
      printf("Reached\n");
    }
    print_list(p);
    while (p) {
      printf("%s %s %s\n", sartist, p->artist, p->name);
      if (!strcmp(p->artist,sartist)) {
        insert_inorder(list, p->artist, p->name);
      }
      p++;
    }
    print_list(list);
  }
}

void shuffle(struct song_node **library) {
  srand(time(NULL));
  struct song_node *list = NULL;
  struct song_node *p;
  int i = 0;
  while (i < 10) {
    int r1 = rand()%27;
    p = library[r1];
    int x = 0;
    while (p) {
      x++;
    }
    p = library[r1];
    int r2 = rand()%x;
    insert_front(list, (p+r2)->artist, (p+r2)->name);
  }
  print_list(list);

}
