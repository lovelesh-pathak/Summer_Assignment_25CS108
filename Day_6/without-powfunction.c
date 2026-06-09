#include<stdio.h>
int main()
{
    int number,power,i;
    long result=1;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("Enter the power:");
    scanf("%d",&power);
    for(i=1;i<=power;i++)          
    {
        result*=number;              
    }
    printf("%d^%d is %ld\n",number,power,result);
    return 0;
}