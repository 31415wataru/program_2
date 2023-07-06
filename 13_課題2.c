#include <stdio.h>
#define N 11 //なぜかa[0]の時の値が反映されないので11個の配列を用意した
void swap(int *u, int *v) {
 int temp;
 temp = *u;
 *u = *v;
 *v = temp;
}
void selectionsort(int a[],int n) {
 int i, j, min;
 
 for(j=0;j<n-1;j++){
  min=j;
  for(i=j+1;i<n;i++){
   if(a[min]>a[i]){
   min=i;
   }
  }
 swap(&a[j],&a[min]);
 }
}
int main(){
  int a[N] = {4,8,1,2,6,8,11,40,3,2};
  selectionsort(a,N);
  int i;
  for(i=0;i<N-1;i++){//配列が11個あるので1個引いてる
    printf("%d",a[i+1]);
    printf("  ");
  }
  return 0;
}
