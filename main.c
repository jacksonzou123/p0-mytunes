#include <stdio.h>
#include <stdlib.h>
#include "songs.h"
//#include "list.h"

int main(){
  printf("PROGRAM START\n");
  struct song_node *test = NULL;
  printf("\nEmpty list:\n");
  print_list(test);
  printf("\nFilling list.\n");

  test = insert_inorder(test, "I Had a Big Brain", "JunTao Lei");
  test = insert_inorder(test, "Sucking at C", "Jeff Lin");
  test = insert_inorder(test, "Big Boi Basses", "Jackson Zou");
  test = insert_inorder(test, "Snaky Snares", "Jeff Lin");
  test = insert_inorder(test, "I Love Jesus", "JunTao Lei");
  test = insert_inorder(test, "Bad Song", "Big Bobby");
  test = insert_inorder(test, "AAASong", "AAAArtist");
  test = insert_inorder(test, "No More Ideas", "Random Man");
  test = insert_inorder(test, "Pointer Power", "DW");
  test = insert_inorder(test, "ZZZSong", "ZZZArtist");
  printf("\nFilled list:\n");
  print_list(test);

  printf("\nRemoving node.\n");
  test = remove_node(test, "JunTao Lei", "I Had a Big Brain");
  printf("Removing front node.\n");
  test = remove_node(test, "AAAArtist", "AAASong");
  printf("Removing end node.\n");
  test = remove_node(test, "ZZZArtist", "ZZZSong");
  print_list(test);
  printf("\n");

  struct song_node *find = NULL;
  find = find_firstsong(test, "Jackson Zou");
  struct song_node *find2 = NULL;
  find2 = find_song(test, "Jackson Zou", "Big Boi Basses");
  printf("\nTest:\n");
  print_list(test);
  printf("Find:\n");
  print_list(find);
  printf("Find2:\n");
  print_list(find2);
}
