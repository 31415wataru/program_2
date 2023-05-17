#include<stdio.h>
#include<string.h>
int main(void){
 char text[99];
 printf("文字列をアルファベットで入力してください:\n");
 scanf("%s", text);
 int i;
 int n;
 printf("大文字と小文字を入れ替え,アルファベット以外は'?'に置き換えます:\n");
 for(n=0;n<strlen(text);n++){
      if( (text[n]>='a'&& text[n]<='z')){
         printf("%c",text[n] -32);
      }else if(text[n]>='A' && text[n]<='Z'){
         printf("%c",text[n] +32);
      }else{
        printf("?");
      }
  }
 return 0;
}