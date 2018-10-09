#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

void print_list(struct node * n){
  while(n->next){
    printf("%d",n->i);
  }
}
/* struct node * insert_front(struct node *, int);
   struct node * free_list(struct node *); */
