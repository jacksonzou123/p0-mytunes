#include <stdio.h>
#include <stdlib.h>
#include "songs.h"
#include "list.h"

int main(){
  printf("PROGRAM START\n");
  struct song_node *test = NULL;
  printf("\nEmpty list:\n");
  print_list(test);
  printf("\nFilling list.\n");

  test = insert_inorder(test, "juntao lei", "i had a big brain");
  test = insert_inorder(test, "jeff lin", "sucking at c");
  test = insert_inorder(test, "jackson zou", "big boi basses");
  test = insert_inorder(test, "jeff lin", "wheee");
  test = insert_inorder(test, "juntao lei", "pew pew");
  test = insert_inorder(test, "big bobby", "dap me ip");
  test = insert_inorder(test, "bing bong", "paper");
  test = insert_inorder(test, "random man", "halahal");
  test = insert_inorder(test, "dw", "dw");
  test = insert_inorder(test, "jackson zou", "zzartist");
  printf("\nFilled list:\n");
  print_list(test);

  printf("\nRemoving node.\n");
  test = remove_node(test, "juntao lei", "i had a big brain");
  printf("Removing front node.\n");
  test = remove_node(test, "big bobby", "dap me ip");
  printf("Removing end node.\n");
  test = remove_node(test, "random man", "halahal");
  print_list(test);

  struct song_node *find = NULL;
  find = find_firstsong(test, "jackson zou");
  struct song_node *find2 = NULL;
  find2 = find_song(test, "jackson zou", "big boi basses");
  printf("Test:\n");
  print_list(test);
  printf("Find:\n");
  print_list(find);
  printf("Find2:\n");
  print_list(find2);

  struct song_node **table = calloc(27, sizeof(struct song_node));
  table = addSong(table, "jackson zou", "i win");
  // int i;
  // for (i = 0; i < 27; i++) {
  //   struct song_node *new = calloc(1, sizeof(struct song_node));
  //   *(table + i) = new;
  // }
}
