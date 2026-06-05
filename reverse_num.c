//  Write a program to Reverse a number.
#include <stdio.h>
int main(){
    int number, rev=0 , num ;
    printf("enter the number");
scanf("%d",&number);
while (number>0)
{
    num=number%10;
    number=number/10;
    rev=rev*10+num;
   
}
printf("the sum of numberes is %d", rev);
    return 0;
}