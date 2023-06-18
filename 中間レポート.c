#include<stdio.h>
#define N 39
int main(void){
FILE *fp;
fp = fopen("data.txt", "rt");
if(fp == NULL){
 printf("ファイルが開けませんでした\n");
 return 0;
}
int id[N];
int number[N];
int score_1[N];
int score_2[N];
int score_3[N];
int score_4[N];
int score_5[N];
int sum[N];
float avarage[N];
int score_1_up[N];
int score_2_up[N];
int score_3_up[N];
int score_4_up[N];
int score_5_up[N];
int sum_up[N];
float avarage_up[N];
char assessment[N];
int ret;
int i;
int n;
int a;
int max = 0;
int min = 500;
int max_n = 0;
int min_n = 0;
for(i=0;i<40;i++){
 ret = fscanf(fp, "%d %d %d %d %d %d",&number[i],&score_1[i],&score_2[i],&score_3[i],&score_4[i],&score_5[i]);
 sum[i] = score_1[i] + score_2[i] + score_3[i] + score_4[i] + score_5[i] ;
 avarage[i] = (float)sum[i]/5;
 n = number[i] -1;
 id[n] = number[i] -1;
 score_1_up[n] = score_1[i];
 score_2_up[n] = score_2[i];
 score_3_up[n] = score_3[i];
 score_4_up[n] = score_4[i];
 score_5_up[n] = score_5[i];
 sum_up[n] = sum[i];
 avarage_up[n] = avarage[i];
 int a = id[n];
 if (a != n){
    id[n] = n;
 }
 if(sum_up[n] > max){
     max = sum_up[n];
     max_n = n;
 }
 if(sum_up[n] < min){
     min = sum_up[n];
    min_n = n;
 }
 if(sum_up[n] >= 450){
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
//printf("%d",id[39]);
printf("データを学籍番号順に, 合計, 平均, H/L, 評価を付加して出力します\n");
for(n=0;n<40;n++){
    if (max_n == n){
        if(sum_up[n] >= 450){
            printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f, H ,評価：%c+\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
            sum_up[n],avarage_up[n],assessment[n]); 
        }else{
            printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f, H ,評価：%c\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
            sum_up[n],avarage_up[n],assessment[n]); 
        }
        
    }else{
        if(min_n == n){ 
           if(sum_up[n] >= 450){
                printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f, L ,評価：%c+\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
                sum_up[n],avarage_up[n],assessment[n]); 
            }else{
                printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f, L ,評価：%c\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
                sum_up[n],avarage_up[n],assessment[n]); 
            }
        }else{
            if(sum_up[n] >= 450){
                printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f,   ,評価：%c+\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
                sum_up[n],avarage_up[n],assessment[n]); 
            }else{
                printf("学籍番号：%d, 得点1：%d, 得点2：%d, 得点3：%d, 得点4：%d, 得点5：%d, 合計：%d, 平均：%.2f,   ,評価：%c\n",id[n]+1, score_1_up[n],score_2_up[n],score_3_up[n],score_4_up[n],score_5_up[n],
                sum_up[n],avarage_up[n],assessment[n]); 
            }   
    }   
}
}
printf("評価の分布をヒストグラムで出力します\n");
int count_A_ = 0;
int count_A = 0;
int count_B = 0;
int count_C = 0;
int count_F = 0;
for(n=0;n<40;n++){
    switch (assessment[n]){
    case 'A':
        if(sum_up[n] >= 450){
         count_A_ += 1;   
        }else{
         count_A += 1;  
        }
    break;
    case 'B':
        count_B += 1;
    break;
    case 'C':
        count_C += 1;
    break;
    
    default:
        count_F += 1;
        break;
    }
}
printf("A+評価%d人",count_A_);
for(a=0;a<count_A_;a++){
    printf("*");
}
printf("\nA評価 %d人",count_A);
for(a=0;a<count_A;a++){
    printf("*");
}
printf("\nB評価 %d人",count_B);
for(a=0;a<count_B;a++){
    printf("*");
}
printf("\nC評価%d人",count_C);
for(a=0;a<count_C;a++){
    printf("*");
}
printf("\nF評価%d人",count_F);
for(a=0;a<count_F;a++){
    printf("*");
}
fclose(fp);
return 1;
}

