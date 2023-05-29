#include <stdio.h>
#define student_no 3
#define report_no 2
struct seiseki{
int bango;
int report[2];
double heikin;
char *hyouka;
} ;

int main(void){
  struct seiseki pro[student_no]; 
  int i = 0;
  int j = 0;
  for(i = 0;i<student_no;i++){
    pro[i].heikin =0.0;
    printf("学生%dの学籍番号:",i+1);
    scanf("%d",&pro[i].bango);
    for(j=0;j<report_no;j++){
        printf("第%d回レポート点数",j+1);
        scanf("%d",&pro[i].report[j]);
        pro[i].heikin += pro[i].report[j];
    }
    pro[i].heikin = pro[i].heikin/2;
    printf("学籍番号%dさんの平均点は%f点です\n\n", pro[i].bango,pro[i].heikin);
  }
  
}
