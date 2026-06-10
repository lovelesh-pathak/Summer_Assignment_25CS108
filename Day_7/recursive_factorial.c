#include<stdio.h>                 
int factorial(int number)                //recursive function
{
    if( number==0)
       return 0;                   
    else if(number==1)
       return 1;                                  
    else
       return number*factorial(number-1);     // call the function itself and find factorial of number
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial of number %d is %d\n",num,factorial(num));  //call and take return value from function
    return 0;
}