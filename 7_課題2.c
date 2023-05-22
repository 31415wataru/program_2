#include<stdio.h>
int main(void){
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
    printf("[");
}
if( (moji =='u')){
    printf("["); 
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
fclose(fp);
return 1;
}