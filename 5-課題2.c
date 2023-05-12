#include <stdio.h>
#define N 10
int main(void){
int tensu[N];
int i;
int max = 1;
int min = 1000;
int n = 0;
int m = 0;

for(i=0; i<=N-1; i++){
printf("%2d 回目の得点を入力して下さい:", i+1);
scanf("%d", &tensu[i]);
}

for(i=0; i<=N-1; i++){
    if(tensu[i] > max){
        max = tensu[i];
        n = i+1;
    }
}
for(i=0; i<=N-1; i++){
    if(tensu[i] < min){
        min = tensu[i];
        m = i+1;
    }
}
printf("最高点は%2d回目の得点: %3d\n", n, max);
printf("最低点は%2d回目の得点: %3d\n", m, min);
}