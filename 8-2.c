#include <stdio.h>
int main( void )
{
char name[128];
printf("名前を入力して下さい: ");
scanf("%s", name);
printf("%sさんこんにちは!!\n", name);
return(0);
}
