#include<stdio.h>
#include<stdlib.h>
#define smax 100
struct element{
 char data;
 struct element *next;
};
struct stack{
 char box[smax];
 int top;
};
#include "code2_3.h"
void printall( struct element *p){
  while (p) {
  printf("%c\n", p->data);
  p = p->next;
  }
}
void printall_reverse( struct element *p){
    if(p->next == NULL) {
      putchar('\n');
    }else {
      p = p->next;
      putchar(p->data);
      putchar('\n');
      printall_reverse(p);
      putchar('\n');
      putchar(p->data);
    }
}
int main(void){

 struct element *list;

 list = create();
 insert(list, 1, 'A');
 insert(list, 2, 'B');
 insert(list, 2, 'a');
 insert(list, 4, 'b');
 //printall(list);
 printf("\n");
 printall_reverse(list);
 return 0;
}