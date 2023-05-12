#include <stdio.h>
#define N 10
double average(int n, int a[]){
 int i;
 nint sum;
 sum = 0;
 for (i=0; i<10; i++)
 sum += a[i];
 return sum / 10;
}
double average(int n, int a[]);
int main(void){
 int a[N];
 double ave;
 for(int i=0; i < N; i++){
     printf("整数%2dを入力：",i+1);
    scanf("%d", &a[i]);
 }
 ave = average(N, a);
 printf("平均は%fです\n", ave);
 return 0;
}

