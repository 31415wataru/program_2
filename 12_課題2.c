#include<stdio.h>
#include<stdlib.h>
#define hmax 100
#include "code2_5.h"

int main(void)
{
    int data;
    struct heap h, *p;
    p = &h;
    initialize(p);

    while(1){
      printf("整数を入力(-1で入力終了):");
      scanf("%d",&data);
      if(data == -1){
        break;
      }
      insert(p,data);
      printf("現在のデータ個数：%d,最小値：%d\n", p->size,findmin(p));
    }

     printf("\nデータを昇順で出力します:\n");
     while(p->size > 0){
        printf("%d",findmin(p));
        deletmin(p);
     }


     return 0;
}