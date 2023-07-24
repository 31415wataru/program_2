#include<stdio.h>
#define N 25 //40人いますよということを定義している
int main(void){
FILE *fp;
fp = fopen("seiseki.txt", "rt");
if(fp == NULL){
 printf("ファイルが開けませんでした\n");
 return 0;
}
int id_avarage[64]; 
int number[N];//背番号(学籍番号順に並んでいる)
int number_avarage[N]; //背番号(リスト順に並んでいる)
int score_1[N]; //打数(リスト順に並んでいる)
int score_2[N]; //安打(リスト順に並んでいる)
int score_3[N]; //HR(リスト順に並んでいる)
int score_4[N]; //打点(リスト順に並んでいる)
float avarage[N]; //打率(リスト順に並んでいる)
int score_1_up[N]; //打数(学籍番号順に並んでいる)
int score_2_up[N]; //安打(学籍番号順に並んでいる)
int score_3_up[N]; //HR(学籍番号順に並んでいる)
int score_4_up[N]; //打点(学籍番号順に並んでいる)
float avarage_up[N]; //打率(学籍番号順に並んでいる)
char assessment[N]; //成績評価
int ret; //1行ごとにデータを読み取り
int i; //for文の増加用
int n; //学籍番号から1を引いた値をを格納
int a; //for文の増加用
int max = 0; //最大値判定用の変数
int min = 500; //最小値判定用の変数
int max_n = 0; //最大値を取得したときの学籍番号から1を引いた値を格納するための変数。
int min_n = 0; //最小値を取得したときの学籍番号から1を引いた値を格納するための変数。
for(i=0;i<25;i++){
 ret = fscanf(fp, "%d %d %d %d %d ",&number[i],&score_1[i],&score_2[i],&score_3[i],&score_4[i]); //1行だけ読み取り
 avarage[i] = (float)score_2[i]/(float)score_1[i];
 //sum[i] = score_1[i] + score_2[i] + score_3[i] + score_4[i]; //合計点を計算し変数sumに代入
 //avarage[i] = (float)sum[i]/5; //平均値を計算し変数sumに代入
 //n = number[i] -1; //読み取った学籍番号から1を引いた値をnに代入
 //id[n] = number[i] -1; //読み取った学籍番号から1を引いた値を変数idのn番目の配列に代入→n番目の数が学籍番号n-1番目になる
 //score_1_up[n] = score_1[i];
 //score_2_up[n] = score_2[i];
 //score_3_up[n] = score_3[i];
 //score_4_up[n] = score_4[i];
 //sum_up[n] = sum[i];
 //avarage_up[n] = avarage[i];//学籍番号順に並べ替え

}
	int j,avarege_number;
	float tmp,tmp_number,tmp_hr,tmp_daten;
	//	昇順ソートのプログラム
	for(i=0;i<25;i++){
	  for (j=i+1;j<25;j++){
		    if(avarage[i] > avarage[j]){
				tmp = avarage[i];
                tmp_number = number[i];
                tmp_hr = score_3[i];
                tmp_daten = score_4[i];
				avarage[i] = avarage[j];
                number[i] = number[j];
                score_3[i] = score_3[j];
                score_4[i] = score_4[j];
				avarage[j] = tmp;
				number[j] = tmp_number;
                score_3[j] = tmp_hr;
				score_4[j] = tmp_daten;
			} 
		}
          
	}
    for(n=0;n<25;n++){ 
       avarege_number = number[n];
       id_avarage[avarege_number] = n+1;
    }
    for(n=0;n<65;n++){ 
     if(id_avarage[n] == 0 || id_avarage[n] > 64 ){
       printf("NULL\n"); 
     }else{
       printf("%d\n",id_avarage[n]);
     }
    }

 /*
 if(sum_up[n] > max){ //最大値を算出するプログラム
     max = sum_up[n];
     max_n = n; //最大値を記録した学籍番号から1を引いた値を変数max_nに代入。
 }
 if(sum_up[n] < min){ //最小値を算出するプログラム
     min = sum_up[n];
    min_n = n; //最小値を記録した学籍番号から1を引いた値を変数min_nに代入。
 }
 if(sum_up[n] >= 450){ //成績評価を行うプログラム(AとA＋は同一としてカウント)
    assessment[n] = 'A' ;
  }else if(sum_up[n] >= 400){
    assessment[n] = 'A' ;
  }else if(sum_up[n] >= 350){
    assessment[n] = 'B' ;
  }else if(sum_up[n] >= 300){
    assessment[n] = 'C' ;
  }else{
    assessment[n] = 'F' ;    
 }
}
*/
//printf("%c",assessment[22]);
//printf("データを学籍番号順に, 合計, 平均, H/L, 評価を付加して出力します\n");
/*for(n=0;n<25;n++){ 
printf("背番号：%d, 打率：%.3lf, HR：%d, 打点：%d, \n",number[n], avarage[n],score_3[n],score_4[n]); 
}*/
//printf("\n");
/*
for(n=0;n<40;n++){ //1行ごと(1人ずつ)学籍番号順に出力する
    if (max_n == n){ //最大値の時
        if(sum_up[n] >= 450){ //A+が判定されたとき
            printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f, H ,評価：%c+\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
            sum_up[n],avarage_up[n],assessment[n]); 
        }else{ //Aが判定されたとき
            printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f, H ,評価：%c\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
            sum_up[n],avarage_up[n],assessment[n]); 
        }
        
    }else{
        if(min_n == n){ //最小値の時
           if(sum_up[n] >= 450){ //A+が判定されたとき
                printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f, L ,評価：%c+\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
                sum_up[n],avarage_up[n],assessment[n]); 
            }else{ //Aが判定されたとき
                printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f, L ,評価：%c\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
                sum_up[n],avarage_up[n],assessment[n]); 
            }
        }else{ //最小値でも最大値でもないとき
            if(sum_up[n] >= 450){ //A+が判定されたとき
                printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f,   ,評価：%c+\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
                sum_up[n],avarage_up[n],assessment[n]); 
            }else{ //Aが判定されたとき
                printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f,   ,評価：%c\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
                sum_up[n],avarage_up[n],assessment[n]); 
            }   
    }   
}
}
*/

fclose(fp);
return 1;
}
