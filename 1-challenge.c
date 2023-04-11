#include<stdio.h>
int main(void)
{
int kakaku;
printf("Please enter the price without tax:");
scanf("%d",&kakaku);
int kakaku_5;
int kakaku_8;
int kakaku_10;
kakaku_5 = kakaku*1.05;
kakaku_8 = kakaku*1.08;
kakaku_10 = kakaku*1.1;
printf("Tax rate 5%:  %d円",kakaku_5);
printf("\nTax rate 8%:  %d円",kakaku_8);
printf("\nTax rate 10%: %d円",kakaku_10);
return 0;
}