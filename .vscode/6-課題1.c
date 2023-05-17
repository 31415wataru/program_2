#include <stdio.h>
int main(void)
{
char a[13] = "Oda Nobunaga";
char b[13] = "Oda Nobunaga";
char *x, *y;
x=a;
y=b;
x=a+4;
*(y+5)=*(b-4);
printf("%s\n",x);
printf("%s\n",y);
return(0);
}
