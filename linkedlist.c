#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

void print_list(struct node * n){
  struct node * cur = n;
  while(cur->next){
    printf("%d",cur->i);
    printf("%s",", ");
    cur = cur->next;
  }
  printf("%d\n",cur->i);
}

struct node * insert_front(struct node * n, int t){
  struct node * ans = malloc(sizeof(struct node));
  ans->i = t;
  ans->next = n;
  return ans;
}

struct node * free_list(struct node * n){
  /*
  struct node * ans = n;
  while(n->next){
    struct node * temp = n->next;
    free(n);
    n = temp;
  }
  free(n);
  return ans;
  */
  if (n == NULL) {
    return n;
  }
  free_list(n->next);
  free(n);
  return n;
}

