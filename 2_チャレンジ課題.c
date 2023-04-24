#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
 
  int a;
  int b;
  srand(time(NULL));
  a = rand();
  b = a%2;

 if(b == 1){
    printf("あたり");
 }else{
    printf("はずれ");
 }

  return 0;
}
