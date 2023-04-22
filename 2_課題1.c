#include <stdio.h>
int main(void) {
int x=1, y=2;
printf("Input the value of x:");
scanf("%d", &x);
if(x==3){ 
 //↑ここが間違っている(x == 3)が正解
  y = 10;
}else{
  y = 20;
}
printf(" Value of x = %d\n", x);
printf(" Value of y = %d\n", y);
return 0;

}
