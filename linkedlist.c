#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

struct song_node * insert_front(struct song_node *p, char *sartist, char *sname) {
  struct song_node *new = calloc(1, sizeof(struct song_node));
  strncpy(new->name, sname, sizeof(new->name));
  strncpy(new->artist, sartist, sizeof(new->artist));
  new->next = p;
  return new;
}

struct song_node * insert_inorder(struct song_node *p, char *sartist, char *sname) {
  if (!p) {
    return insert_front(p, sartist, sname);
  }
  if (strcmp(sartist, p->artist) > 0) {
    p->next = insert_inorder(p->next, sartist, sname);
    return p;
  }
  if (strcmp(sartist, p->artist) == 0) {
    if (strcmp(sname, p->name) >= 0) {
      p->next = insert_inorder(p->next, sartist, sname);
      return p;
    }
  }
  return insert_front(p, sartist, sname);
}

void print_list(struct song_node *p){
  printf("[ ");
  while (p != NULL) {
    printf("[%s, %s] ", p->name, p->artist);
    p = p->next;
  }
  printf("]\n");
}

struct song_node * find_song(struct song_node *p, char *sartist, char *sname) {
  while (p) {
    if (!strcmp(p->artist,sartist) && !strcmp(p->name,sname)) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

struct song_node * find_firstsong(struct song_node *p, char *sartist) {
  while (p) {
    if (!strcmp(p->artist,sartist)) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

// struct song_node * random_song(struct song_node *p) {
//   return p;
// }

struct song_node * remove_node(struct song_node *p, char *sartist, char *sname) {
  struct song_node *start = p;
  if (!strcmp(p->artist,sartist) && !strcmp(p->name,sname)){
    free(p);
    start = p->next;
    return start;
  }
  while (p->next) {
    if (!strcmp(p->next->artist,sartist) && !strcmp(p->next->name,sname)) {
      if (!p->next->next){
        free(p->next);
        p->next = NULL;
        return start;
      }
      struct song_node *temp = p->next->next;
      free(p->next);
      p->next = temp;
      return start;
    }
    p = p->next;
  }
  return start;
}

struct song_node * free_list(struct song_node *p) {
  if (p) {
    free_list(p->next);
    free(p);
  }
  return NULL;
}
