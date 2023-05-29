#include <stdio.h>
struct batter{
char name[20];
double average;
int homerun;
int rbi;
};
#define N 2
int main (void) {
struct batter sample[N];
int i;
for(i=0;i<N;i++){
printf("%d番目 名前:",i+1 ); scanf ("%s",sample[i].name);
printf("%d番目 打率:",i+1 ); scanf ("%lf",&sample[i].average);
printf("%d番目 本塁打:",i+1 ); scanf ("%d",&sample[i].homerun);
printf("%d番目 打点:",i+1 ); scanf ("%d",&sample[i].rbi);
}
for(i=0;i<N;i++){
printf("%s , %.2lf, %d, %d\n", sample[i].name, sample[i].average,
sample[i].homerun, sample[i].rbi);
}
return (0);
}
