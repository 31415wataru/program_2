#include <stdio.h>
int main(void){
int a;
printf("aの数値を入力してください:");
scanf("%d",&a);
if(a%2==0){
printf("偶数です \n");
}else{
printf("奇数です \n");
}
return(0);
}
