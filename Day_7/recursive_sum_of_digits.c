#include<stdio.h>
int sumDigits(int number)
{
    if(number==0)
        return 0;
    else
        return (number%10)+sumDigits(number/10);     //to call the function itself and find sum of digits
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The sum of digits of a number %d is %d\n",num,sumDigits(num));    //to print the value of funtion recieved
 return 0;
}