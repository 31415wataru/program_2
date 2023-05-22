#include<stdio.h>
int main(void){
int r =0;
int u =0;
int i =1;
FILE *fp;
fp = fopen("ritsumeikan.txt", "rt");
if(fp == NULL){
    printf("ファイルが開けませんでした\n");
    return 0;
}
char moji;
while(1){
    moji = fgetc(fp);
    if(moji == EOF){
        break;
    }
    if( (moji =='R')){
         n = 1;
    }
    if( (moji =='i')){
        if (n == 1){
            n++
        }else{
            n =0
        }
    }
    if( (moji =='t')){
         if (n == 2){
            n++
        }else{
            n =0
        }
    }
    if( (moji =='s')){
         if (n == 3){
            n++
        }else{
            n =0
        }
    }
    if( (moji =='u')){
         if (n == 4){
            n++
        }else{
            n =0
        }
    }
    if( (moji =='m')){
         if (n == 5){
            n++
        }else{
            n =0
        }
    }
    if( (moji =='e')){
         if (n == 6){
            n++
        }else{
            n =0
        }
    }
    if( (moji =='i')){
         if (n == 7){
            n++
        }else{
            n =0
        }
    }
    if( (moji =='k')){
        if (n == 8)
        {
            n++
        }else{
            n =0
        }
    }
    if( (moji =='a')){
        if (n == 9)
        {
            n++
        }else{
            n =0
        }
    }
    if( (moji =='n')){
      if (n == 10)
        {
            n = 0;
            r++
        }else{
            n =0
        }
    }
    
    printf("%c", moji);
}
printf("\n");
printf("大文字の「R」は%d個、小文字の「u」は%d個でした",r,u);
fclose(fp);
return 1;
}
