#include <stdio.h>
#define N 25 //打者の人数
struct batter {
 int sebangou, dasu, anda, homerun, daten;
 double daritsu;
};

//#include "rep2.h"

/*----------------------------------------*/
 void swap_batter(struct batter *u,struct batter *v){
struct batter temp;
temp = *u;
*u = *v;
*v = temp;
}

void bubblesort_daritsu(struct batter a[], int n){
 int i, j, sorted;
 j = n;
 do{
    sorted = 1;
    j = j - 1;
    for(i = 1; i <= j; i++)
    if(a[i].daritsu > a[i+1].daritsu){
     swap_batter(&a[i], &a[i+1]);
     sorted=0;
    }
 }while(!sorted);
}

void selectionsort_homerun(struct batter a[], int n){
  int i, j, min, temp;
  i = 0;
  while(i < n){
    min = i;
    for(j=i+1; j<n; j++){
      if(a[j].homerun<a[min].homerun){
        min = j;
      }
    }
    temp = a[i].homerun;
    a[i].homerun = a[min].homerun;
    a[min].homerun = temp;
    i += 1;
  }
}

void  insertionsort_daten(struct batter a[], int n){
    int  i, j, temp;
    i = 1;
  while(i < n){
    temp = a[i].daten;
    j = i - 1;
    while(j >= 0 && temp < a[j].daten){
      a[j+1].daten = a[j].daten;
      j = j - 1;
    }
    a[j+1].daten = temp;
    i = i + 1;
  }

}
/*-------------------------------------------------*/

int main(void){
 struct batter data[N+1];
 FILE *infile;
 int i;

 // ファイルの読み込み
infile = fopen("seiseki.txt", "rt");
 if (infile == NULL){
 printf("入力ファイルをオープンできません\n");
 return 1;
 }
 for (i=1; i<=N; i++) {
 fscanf(infile, "%d\t%d\t%d\t%d\t%d\n", &data[i].sebangou, &data[i].dasu, &data[i].anda, &data[i].homerun, &data[i].daten);
 data[i].daritsu = (float) data[i].anda / data[i].dasu;
}
 printf("ファイルの読み込みが完了しました\n");
 fclose(infile);
 // 読み込んだデータの表示
printf("背番号 \t 打率 \t HR \t 打点\n"); //HRはホームラン
 for (i=1; i<=N; i++){
 printf("%2d\t%.3lf\t%2d\t%3d\n", data[i].sebangou, data[i].daritsu, data[i].homerun, data[i].daten);
 }

    printf("\n打率を昇順に並び替えます\n");
    bubblesort_daritsu(data, N);
     //ソートした打率のデータを表示
    for(i=1; i<=N; i++){
      printf("%2d\t%.3lf\t%2d\t%3d\n", data[i].sebangou, data[i].daritsu, data[i].homerun, data[i].daten);
    }
    printf("ホームランで昇順に並び替えます\n");
    selectionsort_homerun(data, N);
    for(i=1; i<=N; i++){
      printf("%2d\t%.3lf\t%2d\t%3d\n", data[i].sebangou, data[i].daritsu, data[i].homerun, data[i].daten);
    }
    printf("打点で昇順に並び替えます\n");
    insertionsort_daten(data, N);
    for(i=1; i<=N; i++){
      printf("%2d\t%.3lf\t%2d\t%3d\n", data[i].sebangou, data[i].daritsu, data[i].homerun, data[i].daten);
    }

 return 0;
}
