#include <stdio.h>
#define N 26 //打者の人数
struct batter {
 int sebangou, dasu, anda, homerun, daten;
 double daritsu;
};

void bubblesort_daritsu(struct batter a[] , int n){
    int i, j, min, temp_1,temp_3,temp_4;
    float temp_2;
for(i=0;i<N;i++){
	  for (j=i+1;j<N;j++){
		    if(a[i].daritsu > a[j].daritsu){
				temp_1 = a[i].sebangou;
        temp_2 = a[i].daritsu;
        temp_3 = a[i].homerun;
        temp_4 = a[i].daten;
				a[i].sebangou = a[j].sebangou;
        a[i].daritsu = a[j].daritsu;
        a[i].homerun = a[j].homerun;
        a[i].daten = a[j].daten;
				a[j].sebangou = temp_1;
				a[j].daritsu = temp_2;
        a[j].homerun = temp_3;
				a[j].daten = temp_4;
			} 
		}
          
	}
}
void selectionsort_homerun(struct batter a[], int n){
  int i, j, min, temp_1,temp_3,temp_4;
  float temp_2;
  i = 0;
  while(i < n){
    min = i;
    for(j=i+1; j<n; j++){
      if(a[j].homerun<a[min].homerun){
        min = j;
      }
    }
    temp_1 = a[i].sebangou;
    temp_2 = a[i].daritsu;
    temp_3 = a[i].homerun;
    temp_4 = a[i].daten;
    a[i].sebangou = a[min].sebangou;
    a[i].daritsu = a[min].daritsu;
    a[i].homerun = a[min].homerun;
    a[i].daten = a[min].daten;
    a[min].sebangou = temp_1;
    a[min].daritsu = temp_2;
    a[min].homerun = temp_3;
    a[min].daten = temp_4;
    i += 1;
  }
}

void  insertionsort_daten(struct batter a[], int n){
    int  i, j, temp_1,temp_3,temp_4;
    float temp_2;
    i = 1;
  while(i < n){
    temp_1 = a[i].sebangou;
    temp_2 = a[i].daritsu;
    temp_3 = a[i].homerun;
    temp_4 = a[i].daten;
    j = i - 1;
    while(j >= 0 && temp_4 < a[j].daten){
      a[j+1].sebangou = a[j].sebangou;
      a[j+1].daritsu = a[j].daritsu;
      a[j+1].homerun = a[j].homerun;
      a[j+1].daten = a[j].daten;
      j = j - 1;
    }
    a[j+1].sebangou = temp_1;
    a[j+1].daritsu = temp_2;
    a[j+1].homerun = temp_3;
    a[j+1].daten = temp_4;
    i = i + 1;
  }

}
/*-------------------------------------------------*/

int main(void){
 struct batter data[N+1];
 FILE *infile;
 int i;
 int choice[2];
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
    for(i=0;i<3;i++){
      printf("なにで並べますか？(0打率、1ホームラン、2打点、10出力)");
      scanf("%d",&choice[i]);
      if(choice[i] == 10){
        break;
      }
    }
    printf("背番号 \t 打率 \t HR \t 打点\n"); //HRはホームラン
    if(choice[0]==0 && choice[1]==1 && choice[2]==2){
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      
      }
      if(choice[0]==0 && choice[1]==1 && choice[2]==10){
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      
      }
      if(choice[0]==0 && choice[1]==2 && choice[2]==1){
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      
      }
      if(choice[0]==0 && choice[1]==2 && choice[2]==10){
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      
      }
      if(choice[0]==0 && choice[1]==10){
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
 
      }


      if(choice[0]==1 && choice[1]==0 && choice[2]==2){
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      
      }
      if(choice[0]==1 && choice[1]==0 && choice[2]==10){
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      }
      if(choice[0]==1 && choice[1]==2 && choice[2]==0){
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      
      }
      if(choice[0]==1 && choice[1]==2 && choice[2]==10){
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      
      }
      if(choice[0]==0 && choice[1]==10){
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
 
      }



      if(choice[0]==2 && choice[1]==0 && choice[2]==1){
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      
     
      
      }
      if(choice[0]==2 && choice[1]==0 && choice[2]==10){
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      
      }
      if(choice[0]==2 && choice[1]==1 && choice[2]==0){
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      printf("打率を昇順に並び替えます\n");
      bubblesort_daritsu(data, N);
      
      }
      if(choice[0]==2 && choice[1]==1 && choice[2]==10){
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
      printf("ホームランで昇順に並び替えます\n");
      selectionsort_homerun(data, N);
      
      }
      if(choice[0]==2 && choice[1]==10){
      printf("打点で昇順に並び替えます\n");
      insertionsort_daten(data, N);
 
      }
      
    /*printf("\n打率を昇順に並び替えます\n");
    bubblesort_daritsu(data, N);
    printf("打点で昇順に並び替えます\n");
    insertionsort_daten(data, N);
    printf("ホームランで昇順に並び替えます\n");
    selectionsort_homerun(data, N);
    printf("背番号 \t 打率 \t HR \t 打点\n"); //HRはホームラン
    */
    for(i=0; i<25; i++){
      printf("%2d\t%.3lf\t%2d\t%3d\n", data[i].sebangou, data[i].daritsu, data[i].homerun, data[i].daten);
    }

 return 0;
}
