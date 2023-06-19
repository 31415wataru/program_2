#include<stdio.h>
#include<stdlib.h>
struct element{
 char data;
 struct element *next;
};
#include "code2_2.h"
void printall (struct element * p){
 while (p) {
  printf("%c\n", p->data);
  p = p->next;
  }
}
int main(void){
 struct element *list;
 list = create();
 insert(list, 1, 'A');
 insert(list, 2, 'B');
 insert(list, 2, 'a');
 insert(list, 4, 'b');

 printall(list);
 return 0;
}
