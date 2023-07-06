#include <stdio.h>
#define qmax 50
#define m 50
#include "code3_1.h"
int main(){
 int a0[10]={3,4,8,1,2,6,8,11,40,2};
 int *a, i;

 a = a0-1;
 bucketsort(a,10);
 printf("バケットソートでソーティング結果\n");
 for(i=0;i<10;i++){
 printf("%d" ,a[i+1]);
 printf("　");
 }
 printf("\n");
 return 0;
}