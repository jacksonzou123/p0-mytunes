#include <stdio.h>
#include <stdlib.h>
#include "songs.h"
//#include "list.h"

int main(){
  printf("PROGRAM START\n");
  struct song_node *test = NULL;
  printf("Empty list:\n");
  print_list(test);
  printf("Filling list.\n");

  test = insert_inorder(test, "i had a big brain", "juntao lei");
  test = insert_inorder(test, "jaha", "wing wong");
  test = insert_inorder(test, "ha", "wing wong");
  test = insert_inorder(test, "jaha", "wdfing wong");
  test = insert_inorder(test, "jaha", "aawing wong");
  test = insert_inorder(test, "jadfha", "bbwing wong");
  test = insert_inorder(test, "asfjaha", "ccwing wong");
  test = insert_inorder(test, "jaha", "sdwing wong");
  test = insert_inorder(test, "jaha", "fefwing wong");
  test = insert_inorder(test, "jasfaha", "fefwing wong");
  test = insert_inorder(test, "a", "sawing wong");
  test = insert_inorder(test, "jah", "dffewwing wong");
  printf("Filled list:\n");
  print_list(test);

  printf("Removing node.\n");
  test = remove_node(test, "juntao lei", "i had a big brain");
  printf("Removing front node.\n");
  test = remove_node(test, "aawing wong", "jaha");
  printf("Removing end node.\n");
  test = remove_node(test, "wing wong", "jaha");
  print_list(test);
}
