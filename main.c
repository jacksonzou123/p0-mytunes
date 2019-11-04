#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "library.h"

int main(){
  // printf("PROGRAM START\n");
  // struct song_node *test = NULL;
  // printf("\nEmpty list:\n");
  // print_list(test);
  // printf("\nFilling list.\n");
  //
  // test = insert_inorder(test, "juntao lei", "i had a big brain");
  // test = insert_inorder(test, "jeff lin", "sucking at c");
  // test = insert_inorder(test, "jackson zou", "big boi basses");
  // test = insert_inorder(test, "jeff lin", "wheee");
  // test = insert_inorder(test, "juntao lei", "pew pew");
  // test = insert_inorder(test, "big bobby", "dap me ip");
  // test = insert_inorder(test, "bing bong", "paper");
  // test = insert_inorder(test, "random man", "halahal");
  // test = insert_inorder(test, "dw", "dw");
  // test = insert_inorder(test, "jackson zou", "zzartist");
  // printf("\nFilled list:\n");
  // print_list(test);
  //
  // printf("\nRemoving node.\n");
  // test = remove_node(test, "juntao lei", "i had a big brain");
  // printf("Removing front node.\n");
  // test = remove_node(test, "big bobby", "dap me ip");
  // printf("Removing end node.\n");
  // test = remove_node(test, "random man", "halahal");
  // print_list(test);
  // printf("\n");
  //
  // struct song_node *find = NULL;
  // find = find_firstsong(test, "jackson zou");
  // struct song_node *find2 = NULL;
  // find2 = find_song(test, "jackson zou", "big boi basses");
  // printf("Test:\n");
  // print_list(test);
  // printf("Find:\n");
  // print_list(find);
  // printf("Find2:\n");
  // print_list(find2);

  struct song_node *table[27] = {NULL};
  addsong(table, "on zou", "i win");
  addsong(table, "//wack", "wingwong");
  addsong(table, "untao lei", "i had a big brain");
  addsong(table, "ff lin", "sucking at c");
  addsong(table, "kson zou", "big boi basses");
  addsong(table, "f lin", "wheee");
  addsong(table, "ntao lei", "pew pew");
  addsong(table, "bg bobby", "dap me ip");
  addsong(table, "ing bong", "paper");
  addsong(table, "random man", "halahal");
  addsong(table, "dw", "dw");
  addsong(table, "ab", "zzartist");
  addsong(table, "cdg", "zzartist");
  addsong(table, "efu", "zzartist");
  addsong(table, "fegrb", "zzartist");
  addsong(table, "efu", "zzartist");
  addsong(table, ",mnb", "zzartist");
  addsong(table, "jas", "zzartist");
  addsong(table, "zxh", "zzartist");
  addsong(table, "edf", "zzartist");
  printLibrary(table);
  struct song_node *finding1 = findSong(table, "f lin", "wheee");

  printf("\nPrinting finding1\n");
  print_list(finding1);
  // int i;
  // for (i = 0; i < 27; i++) {
  //   struct song_node *new = calloc(1, sizeof(struct song_node));
  //   *(table + i) = new;
  // }

  // printf("\n");
  //
  // struct song_node * table[27];
  // int i;
  // for (i = 0; i < 27; i++) {
  //   struct song_node *new = NULL;
  //   table[i] = new;
  // }
  // table[0] = insert_inorder(table[0], "jeff","title");
  // for (i = 0; i < 27; i++) {
  //   print_list(table[i]);
  // }

}
