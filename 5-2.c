#include<stdio.h>

int main(void){
    int tensu[10];
    int goukei = 0;
    int i;
    double heikin;

    for(i=0; i<10; i++){
        printf("%d人目:",i+1); scanf("%d",&tensu[i]);
        goukei += tensu[i];
    }

    heikin = (double)goukei/10;

    printf("合計点は%d点です.\n",goukei);
    printf("平均点は%5.2lf点です.\n",heikin);

    return(0);
}