#include<stdio.h>
int fibonacci(int number)             //recursive function
{
    if(number==0)
       return 0;
    else if(number==1)
       return 1;
    else
       return fibonacci(number-1)+fibonacci(number-2);       //to call the function itself and find fibonacci series
}
int main()
{
    int terms,i;
    printf("Enter the number of terms for series:");
    scanf("%d",&terms);
    printf("Fibonacci series:\n");
    for(i=0;i<terms;i++)
    {
        printf("%d\t",fibonacci(i));       //to print the return value of function recieved
    }
    return 0;
}