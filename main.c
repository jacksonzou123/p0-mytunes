#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "library.h"

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
  printf("\n");

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
  printf("\n");

  struct song_node *table[27] = {NULL};
  addsong(table, "a1", "song1");
  addsong(table, "a2", "song2");
  addsong(table, "c1", "song3");
  addsong(table, "c2", "song4");
  addsong(table, "e1", "song5");
  addsong(table, "e2", "song6");
  addsong(table, "g1", "song7");
  addsong(table, "g2", "song8");
  addsong(table, "i1", "song9");
  addsong(table, "i2", "song10");
  addsong(table, "k1", "song11");
  addsong(table, "k2", "song12");
  addsong(table, "m1", "song13");
  addsong(table, "m2", "song14");
  addsong(table, "o1", "song15");
  addsong(table, "o2", "song16");
  addsong(table, "q1", "song17");
  addsong(table, "q2", "song18");
  addsong(table, "s1", "song19");
  addsong(table, "s2", "song20");
  addsong(table, "u1", "song21");
  addsong(table, "u2", "song22");
  addsong(table, "w1", "song23");
  addsong(table, "w2", "song24");
  addsong(table, "y1", "song25");
  addsong(table, "y2", "song26");
  // addsong(table, "!@", "song27");
  // addsong(table, "$&", "song28");
  printLibrary(table);
  printf("\n");

  searchLetter(table, 'g');
  printf("\n");

  searchArtist(table,"c1");
  printf("\n");

}
