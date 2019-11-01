#include <stdio.h>
#include <stdlib.h>
#include "songs.h"
//#include "list.h"

int main(){
  struct song_node *test = NULL;
  print_list(test);
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
  print_list(test);
  test = remove_node(test, "jaha", "wing wong");
  print_list(test);
}
