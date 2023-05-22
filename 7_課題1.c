#include<stdio.h>
int main(void){
int r =0;
int u =0;
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
         r++;
    }
     if( (moji =='u')){
         u++;
    }
    printf("%c", moji);
}
printf("\n");
printf("大文字の「R」は%d個、小文字の「u」は%d個でした",r,u);
fclose(fp);
return 1;
}
