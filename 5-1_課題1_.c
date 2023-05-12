#include <stdio.h>
void swap(int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;

}
void sort(int *n1, int *n2, int *n3 ){
    if (*n1 < *n2) swap(n1, n2);
    if (*n2 < *n3) swap(n2, n3);
    if (*n1 < *n2) swap(n1, n2);
}
int main( void ){
int a, b,c;
printf("aの値を入力して下さい: "); scanf("%d", &a);
printf("bの値を入力して下さい: "); scanf("%d", &b);
printf("cの値を入力して下さい: "); scanf("%d", &c);
sort(&a, &b ,&c);
printf("a = %d, b = %d, c= %d\n", a, b, c);
return(0);
}
