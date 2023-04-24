#include <stdio.h>
int main(void)
{
int i;
 printf("Looping with \"for\" statement: \n");
for(i=0;i<5;i++){
 printf("Ritsumeikan University\n");
} printf("\n");
 printf("Looping with \"while\" statement:\n");
 i = 0;
while (i<5){
 printf("Ritsumeikan University\n");
i++;
} printf("\n");
 printf("Looping with \"do-while\" statement:\n");
i = 0;
do{
 printf("Ritsumeikan University\n");
 i++;
}while(i<5);
return (0);
}