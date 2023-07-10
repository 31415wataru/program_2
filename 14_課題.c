#include <stdio.h>
#define N 25 //打者の人数
struct batter {
 int sebangou, dasu, anda, homerun, daten;
 double daritsu;
};
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
 data[i].daritsu = (double) data[i].anda / data[i].dasu;
}
 printf("ファイルの読み込みが完了しました\n");
 fclose(infile);
 // 読み込んだデータの表示
printf("背番号 \t 打率 \t HR \t 打点\n"); //HRはホームラン
 for (i=1; i<=N; i++){
 printf("%2d\t%.3lf\t%2d\t%3d\n", data[i].sebangou, data[i].daritsu, data[i].homerun, data[i].daten);
 }
 return 0;
}
