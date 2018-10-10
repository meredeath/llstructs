#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(){

  struct node * a = malloc(sizeof(struct node));
  a->i = 6;
  a->next = NULL;
  struct node * p1 = insert_front(a,5);
  struct node * p2 = insert_front(p1, 4);

  printf("%s\n","should print a list of 4, 5, 6");
  print_list(p2);

  printf("\n%s\n","should free that list and print whatever junk values get inserted");
  free_list(p2);
  print_list(p2);
  return 0;
}
