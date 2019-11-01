#include <stdio.h>
#include <stdlib.h>
#include "songs.h"
//#include "list.h"

int main(){
  printf("PROGRAM START\n");
  struct song_node *test = NULL;
  print_list(test);
  test = insert_inorder(test, "i had a big brain", "juntao lei");
  print_list(test);
  test = insert_inorder(test, "jaha", "wing wong");
  print_list(test);
}
