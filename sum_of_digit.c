//  Write a program to Find sum of digits of a number.
#include <stdio.h>
int main(){
    int number, sum=0 , num ;
    printf("enter the number");
scanf("%d",&number);
while (number>0)
{
    num=number%10;
    number=number/10;
    sum=sum+num;
}
printf("the sum of numberes is %d", sum);
    return 0;
}