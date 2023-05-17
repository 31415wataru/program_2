#include<stdio.h>
#include<string.h>
int main(void){
 char text[99];
 printf("文字列をアルファベット大文字で入力してください:");
 scanf("%s", text);
 int i;
 int n;
 printf("大文字のまま逆順にします:\n");
 for(i=strlen(text);i>=0;i--){
  printf("%c",text[i]);
 }
 printf("\n");
 printf("小文字逆順にします:\n");
 for(n=strlen(text);n>=0;n--){
      printf("%c",text[n] +32);
  }
 return 0;
}