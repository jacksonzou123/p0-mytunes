#ifndef SONGS_H
#define SONGS_H

#include <stdio.h>
#include <stdlib.h>

struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};

struct song_node * insert_front(struct song_node *p, char *sartist, char *sname);

struct song_node * insert_inorder(struct song_node *p, char *sartist, char *sname);

void print_list(struct song_node *p);

struct song_node * find_song(struct song_node *p, char *sartist, char *sname);

struct song_node * find_firstsong(struct song_node *p, char *sartist);

// struct song_node * random_song(struct song_node *p);

struct song_node * remove_node(struct song_node *p, char *sartist, char *sname);

struct song_node * free_list(struct song_node *p);

#endif
