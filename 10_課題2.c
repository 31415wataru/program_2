#include<stdio.h>
//非再帰的アルゴリズム
int fractional_1(int n,int m){
int r = n%m;        
 while(r != 0) {
  n = m;
  m = r;
  r = n % m;
return gcd(n,m);
}
}
//再帰的アルゴリズム
int fractional_2(int n,int m){
if(n==0){
return(m);
}else{
return(gcd(n, m%n));
}
}
//main関数
int main(void){
int n = 0;
int m = 0;
int result_1 = 0;
int result_2 = 0;
printf("自然数nとmの最大公約数を求めます、nの値を入力してください："); scanf("%d", &n);
printf("自然数nとmの最大公約数を求めます、mの値を入力してください："); scanf("%d", &m);
result_1 = fractional_1(n,m);
result_2 = fractional_2(n,m);
printf("n=%d,m=%dの最大公約数 非再帰版の計算結果: %d\n",n,m, result_1);
printf("n=%d,m=%dの最大公約数 再帰版の計算結果: %d\n",n,m,result_2);
return 0;
}