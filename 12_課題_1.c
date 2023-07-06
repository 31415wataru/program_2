#include<stdio.h>
#include<string.h>
#define qmax 100
#include "code2_4.h"

int main(void)
{
    int i;
    char item[qmax+1];
    struct queue q, *p;
    p = &q ;
    initialize(p);
    printf("アルファベットを10個以下入力しなさい：");
    scanf("%s",item);

    for(i=0;i<10;i++){
        insert(p, item[i]);
    }
    printf("キューからデータを取り出し表示する：");
    for(i=0; i< p->count; i++){
        printf("%c",delete(p));

    }
    return 0;
}