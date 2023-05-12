#include <stdio.h>
#define N 10
int main(void){
int tensu[N];
int i;

for(i=0; i<=N-1; i++){
printf("%2d 回目の得点を入力して下さい:", i+1);
scanf("%d", &tensu[i]);
}

for(i=N-1; i>=0; i--){
printf("%2d回目の得点: %3d\n", i+1, tensu[i]);
}
return 0;

}
