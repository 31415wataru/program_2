#include<stdio.h>
#define N 39 //40人いますよということを定義している
int main(void){
FILE *fp;
fp = fopen("data.txt", "rt");
if(fp == NULL){
 printf("ファイルが開けませんでした\n");
 return 0;
}
int id[N]; //学籍番号(学籍番号順に並んでいる)
int number[N]; //学籍番号(リスト順に並んでいる)
int score_1[N]; //1回目のレポートの点数(リスト順に並んでいる)
int score_2[N]; //2回目のレポートの点数(リスト順に並んでいる)
int score_3[N]; //3回目のレポートの点数(リスト順に並んでいる)
int score_4[N]; //4回目のレポートの点数(リスト順に並んでいる)
int score_5[N]; //5回目のレポートの点数(リスト順に並んでいる)
int sum[N]; //5回のレポートの合計点(リスト順に並んでいる)
float avarage[N]; //5回のレポートの平均点(リスト順に並んでいる)
int score_1_up[N]; //1回目のレポートの点数(学籍番号順に並んでいる)
int score_2_up[N]; //2回目のレポートの点数(学籍番号順に並んでいる)
int score_3_up[N]; //3回目のレポートの点数(学籍番号順に並んでいる)
int score_4_up[N]; //4回目のレポートの点数(学籍番号順に並んでいる)
int score_5_up[N]; //5回目のレポートの点数(学籍番号順に並んでいる)
int sum_up[N]; //5回のレポートの合計点(学籍番号順に並んでいる)
float avarage_up[N]; //5回のレポートの平均点(学籍番号順に並んでいる)
char assessment[N]; //成績評価
int ret; //1行ごとにデータを読み取り
int i; //for文の増加用
int n; //学籍番号から1を引いた値をを格納
int a; //for文の増加用
int max = 0; //最大値判定用の変数
int min = 500; //最小値判定用の変数
int max_n = 0; //最大値を取得したときの学籍番号から1を引いた値を格納するための変数。
int min_n = 0; //最小値を取得したときの学籍番号から1を引いた値を格納するための変数。
for(i=0;i<40;i++){
 ret = fscanf(fp, "%d %d %d %d %d %d",&number[i],&score_1[i],&score_2[i],&score_3[i],&score_4[i],&score_5[i]); //1行だけ読み取り
 sum[i] = score_1[i] + score_2[i] + score_3[i] + score_4[i] + score_5[i] ; //合計点を計算し変数sumに代入
 avarage[i] = (float)sum[i]/5; //平均値を計算し変数sumに代入
 n = number[i] -1; //読み取った学籍番号から1を引いた値をnに代入
 id[n] = number[i] -1; //読み取った学籍番号から1を引いた値を変数idのn番目の配列に代入→n番目の数が学籍番号n-1番目になる
 score_1_up[n] = score_1[i];
 score_2_up[n] = score_2[i];
 score_3_up[n] = score_3[i];
 score_4_up[n] = score_4[i];
 score_5_up[n] = score_5[i];
 sum_up[n] = sum[i];
 avarage_up[n] = avarage[i];//学籍番号順に並べ替え
 int a = id[n];
 if (a != n){ //たまに学籍番号から1を引いた値が変数idと違うことがあるので修正するためのif文
    id[n] = n; 
 }
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
//printf("%c",assessment[22]);
printf("データを学籍番号順に, 合計, 平均, H/L, 評価を付加して出力します\n");
//printf("\n");
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
printf("評価の分布をヒストグラムで出力します\n");
int count_A_ = 0; //A+のカウント用の変数
int count_A = 0; //Aのカウント用の変数
int count_B = 0; //Bのカウント用の変数
int count_C = 0; //Cのカウント用の変数
int count_F = 0; //Fのカウント用の変数
for(n=0;n<40;n++){
    switch (assessment[n]){
    case 'A': //成績判定がAだった時(AとA+を判定する必要あり)
        if(sum_up[n] >= 450){
         count_A_ += 1;   
        }else{
         count_A += 1;  
        }
    break;
    case 'B': //成績判定がBだった時
        count_B += 1;
    break;
    case 'C': //成績判定がCだった時
        count_C += 1;
    break;
    
    default: //成績判定がどれにも当てはまっていなかったとき(Fだった時)
        count_F += 1;
        break;
    }
}
printf("A+評価%d人",count_A_);
for(a=0;a<count_A_;a++){ //A+評価の時の数だけ「*」を出力
    printf("*"); 
}
printf("\nA評価 %d人",count_A);
for(a=0;a<count_A;a++){ //A評価の時の数だけ「*」を出力
    printf("*");
}
printf("\nB評価 %d人",count_B);
for(a=0;a<count_B;a++){ //B評価の時の数だけ「*」を出力
    printf("*");
}
printf("\nC評価%d人",count_C);
for(a=0;a<count_C;a++){ //C評価の時の数だけ「*」を出力
    printf("*");
}
printf("\nF評価%d人",count_F);
for(a=0;a<count_F;a++){ //F評価の時の数だけ「*」を出力
    printf("*");
}
fclose(fp);
return 1;
}

