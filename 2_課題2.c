#include <stdio.h>
int main(void){
int five_digit_number;
printf("Please enter a 5 digit integer: ");
scanf("%d", &five_digit_number);
if(five_digit_number %3 == 0){
printf("It is a great lucky number!\n");
}else if(five_digit_number %3 == 1){
printf("It is a lucky number!\n");
}else{
printf("It is an unlucky number!");
}
return(0);
}