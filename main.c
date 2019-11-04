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
  addsong(table, "efu", "zzzzzzartist");
  addsong(table, "fegrb", "zzartist");
  addsong(table, "efu", "zzartist");
  addsong(table, ",mnb", "zzartist");
  addsong(table, "jas", "zzartist");
  addsong(table, "zxh", "zzartist");
  addsong(table, "edf", "zzartist");
  printLibrary(table);
  struct song_node *finding1 = findSong(table, "f lin", "wheee");

  printf("\nPrinting finding1: f lin, wheee\n");
  print_list(finding1);

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
  // printf("\n");

  // struct song_node *table[27] = {NULL};
  // addsong(table, "a1", "song1");
  // addsong(table, "a2", "song2");
  // addsong(table, "c1", "song3");
  // addsong(table, "c2", "song4");
  // addsong(table, "e1", "song5");
  // addsong(table, "e2", "song6");
  // addsong(table, "g1", "song7");
  // addsong(table, "g2", "song8");
  // addsong(table, "i1", "song9");
  // addsong(table, "i2", "song10");
  // addsong(table, "k1", "song11");
  // addsong(table, "k2", "song12");
  // addsong(table, "m1", "song13");
  // addsong(table, "m2", "song14");
  // addsong(table, "o1", "song15");
  // addsong(table, "o2", "song16");
  // addsong(table, "q1", "song17");
  // addsong(table, "q2", "song18");
  // addsong(table, "s1", "song19");
  // addsong(table, "s2", "song20");
  // addsong(table, "u1", "song21");
  // addsong(table, "u2", "song22");
  // addsong(table, "w1", "song23");
  // addsong(table, "w2", "song24");
  // addsong(table, "y1", "song25");
  // addsong(table, "y2", "song26");
  // addsong(table, "!@", "song27");
  // addsong(table, "$&", "song28");

  printf("\nPrinting finding2: jas, zzartist\n");
  struct song_node *finding2 = findArtist(table, "jas");
  print_list(finding2);

  printf("\nRemoving jas, zzartist\n");
  removeSong(table, "jas", "zzartist");
  printLibrary(table);

  printf("\nFinding artists with 'f':\n");
  searchLetter(table, 'f');

  printf("\nFinding artist 'efu':\n");
  searchArtist(table, "efu");

  printf("\nShuffle\n");
  shuffle(table);

  printf("\nClearing library\n");
  clearLibrary(table);
  printLibrary(table);
  printf("\n");

}
