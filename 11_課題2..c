#include<stdio.h>
//非再帰的アルゴリズム
int fractional_1(int n){
int f, i;
if(n==0){
return 1;
}
f = 1;
for(i=1; i<=n; i++){
f = f*i;
}
return f;
}
//再帰的アルゴリズム
int fractional_2(int n){
if(n==0){
return 1;
}else{
return(n*fractional_2(n-1));
}
}
//main関数
int main(void){
int n = 0;
int result_1 = 0;
int result_2 = 0;
printf("nの階乗を求めます、nの値を入力してください："); scanf("%d", &n);
result_1 = fractional_1(n);
result_2 = fractional_2(n);
printf("非再帰版の計算結果: %d\n", result_1);
printf("再帰版の計算結果: %d\n",result_2);
return 0;
}