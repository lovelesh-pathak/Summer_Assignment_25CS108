//  Write a program to Find product of digits.
#include <stdio.h>
int main(){
  int number, product=1 , num ;
    printf("enter the number");
scanf("%d",&number);
while (number>0)
{
    num=number%10;
    number=number/10;
    product=product*num;
}
printf("the sum of numberes is %d", product);
    return 0;
}