#include <stdio.h>
int main(void){
    double a;
    a=1;
for(int i=0;i<11;i++){
    a=1+1/(a+1);
    printf("a%d=%f\n",i,a);
}
}