#include<stdio.h>
int main(void){
FILE *fp;
int r =0;
int u =0;
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
    printf("[");
    r++;
}
if( (moji =='u')){
    printf("["); 
    u++;
}
printf("%c", moji);
if( (moji =='R')){
    printf("]");
}
if( (moji =='u')){
    printf("]"); 
}
}
printf("\n");
printf("大文字の「R」は%d個、小文字の「u」は%d個でした",r,u);
fclose(fp);

return 1;
}