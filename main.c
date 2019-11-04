#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "library.h"

int main(){
  printf("\n\n\n\n\n========== TESTING LINKED LIST ==========\n");

  struct song_node *test = NULL;

  printf("\nEmpty list: ");
  print_list(test);

  printf("\nBuilding song linked list:\n");
  test = insert_inorder(test, "juntao lei", "i had a big brain");
  test = insert_inorder(test, "jeff lin", "sucking at c");
  test = insert_inorder(test, "jackson zou", "big boi basses");
  test = insert_inorder(test, "jeff lin", "wheee");
  test = insert_inorder(test, "jackson zou", "pew pew");
  test = insert_inorder(test, "jackson zou", "dap me ip");
  test = insert_inorder(test, "aaaartist", "aaasong");
  test = insert_inorder(test, "zzzartist", "zzzsong");
  test = insert_inorder(test, "dw", "dw is the best");
  print_list(test);

  printf("\nSearching for artist jeff lin: wheee\n");
  struct song_node *find1 = NULL;
  find1 = find_song(test, "jeff lin", "wheee");
  printf("%p - ", find1);
  print_node(find1);
  struct song_node *find2 = NULL;
  printf("Searching for fakeartist: fakename\n");
  find2 = find_song(test, "fakeartist", "fakename");
  printf("%p - ", find2);
  print_node(find2);

  printf("\nSearching for first song by jackson zou\n");
  struct song_node *find3 = NULL;
  find3 = find_firstsong(test, "jackson zou");
  printf("%p - ", find3);
  print_node(find3);

  printf("\nFinding random song\n");
  struct song_node *find4 = NULL;
  find4 = random_song(test);
  printf("%p - ", find4);
  print_node(find4);

  printf("\nRemoving specified node\n");
  printf("Removing juntao lei: i had a big brain\n");
  test = remove_node(test, "juntao lei", "i had a big brain");
  printf("Removing front node\n");
  test = remove_node(test, "aaaartist", "aaasong");
  printf("Removing end node\n");
  test = remove_node(test, "zzzartist", "zzzsong");
  print_list(test);

  printf("\nFreeing list\n");
  test = free_list(test);
  printf("Empty list: ");
  print_list(test);

  printf("\n\n\n\n\n========== TESTING LIBRARY ==========\n");

  struct song_node *table[27] = {NULL};

  printf("\nBuilding music library:\n");
  addsong(table, "aaaartist", "aaasong");
  addsong(table, "zzzartist", "zzzsong");
  addsong(table, "aaaartist", "randomsong");
  addsong(table, "zzzzartist", "otherrandomsong");
  addsong(table, "leff jin", "big boi basses");
  addsong(table, "leff jin", "chickenbone");
  addsong(table, "juntao lei", "big man anthem");
  addsong(table, "juntao lei", "fried dumplings mmm");
  addsong(table, "zackson jou", "music title");
  addsong(table, "bobby boy", "jeff likes pizza");
  addsong(table, "bobby boy", "big fluffy dogs");
  addsong(table, "bobby boy", "my name is fake");
  addsong(table, "$niper", "ez money");
  addsong(table, "$niper", "fat stacks and racks");
  addsong(table, "&persand", "alakazam");
  addsong(table, "coolrapper", "im not so cool");
  addsong(table, "fredthefireman", "fire is hot");
  addsong(table, "peter", "hi im peter");
  addsong(table, "unoriginal", "im out of ideas");
  addsong(table, "generic rapper", "generic rap song");
  printLibrary(table);

  printf("\nSearching for artist zackson jou: music title\n");
  struct song_node *dnif1 = NULL;
  dnif1 = findSong(table, "zackson jou", "music title");
  printf("%p - ", dnif1);
  print_node(dnif1);

  printf("\nSearching for artist bobby boy\n");
  searchArtist(table, "bobby boy");

  printf("\nSearching for letter z\n");
  searchLetter(table, 'z');

  printf("\nShuffled ten songs\n");
  shuffle(table);

  printf("\nDeleting specified songs\n");
  printf("Removing juntao lei: fried dumplings mmm\n");
  removeSong(table, "juntao lei", "fried dumplings mmm");
  printf("Removing aaaartist: aaasong\n");
  removeSong(table, "aaaartist", "aaasong");
  printf("Removing %persand: alakazam\n");
  removeSong(table, "&persand", "alakazam");
  printLibrary(table);

  printf("\nFreeing library\n");
  clearLibrary(table);
  printf("Empty library:\n");
  printLibrary(table);
  printf("\n");

}
