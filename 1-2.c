#include<stdio.h>

int main(void){
    float teihen,takasa,menseki;

    printf("Enter base lenght:\n");
    scanf("%f\n",&teihen);
    printf("Enter height:\n");
    scanf("%f\n",&takasa);

   menseki = teihen*takasa*0.5;
   printf("A triangle with base %f and height %f has area of %f",teihen,takasa,menseki);
}
