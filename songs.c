#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "songs.h"

struct song_node * insert_front(struct song_node *p, char *sname, char *sartist) {
  struct song_node *new = calloc(1, sizeof(struct song_node));
  strncpy(new->name, sname, sizeof(new->name));
  strncpy(new->artist, sartist, sizeof(new->artist));
  new->next = p;
  return new;
}

struct song_node * insert_inorder(struct song_node *p, char *sname, char *sartist) {
  if (!p) {
    return insert_front(p, sname, sartist);
  }
  if (strcmp(sartist, p->artist) > 0) {
    p->next = insert_inorder(p, sname, sartist);
    return p;
  }
  if (strcmp(sartist, p->artist) == 0) {
    if (strcmp(sname, p->name) < 0) {
      p->next = insert_front(p, sname, sartist);
      return p;
    }
    p->next = insert_inorder(p, sname, sartist);
    return p;
  }
  return insert_front(p, sname, sartist);
}

void print_list(struct song_node *p) {
  printf("[ ");
  while (p != NULL) {
    printf("[%s, %s] ", p->name, p->artist);
    p = p->next;
  }
  printf("]\n");

}

struct song_node * find_song(struct song_node *p, char *sartist, char *sname) {
  return NULL;
}

struct song_node * find_firstsong(struct song_node *p, char *sartist) {
  return NULL;
}

// struct song_node * random_song(struct song_node *p) {
//   return p;
// }

struct song_node * remove_node(struct song_node *p, char *sartist, char *sname) {
  struct song_node * new;
  if (!strcmp(p->artist,sartist)&& !strcmp(p->name,sname)) {
    int more = 1;
    if (p->next == NULL) {
      more = 0;
    }
    new = p->next;
    free(p);
    if (more) {
      new = remove_node(new, sartist, sname);
    }
    return new;
  }
  else {
    int more = 1;
    if (p->next == NULL) {
      more = 0;
    }
    if (more) {
      p->next = remove_node(p->next, sartist, sname);
    }
    return p;
  }
}

struct song_node * free_list(struct song_node *p) {
  if (p) {
    free_list(p->next);
    free(p);
  }
  return NULL;
}
