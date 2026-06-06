#include <stdio.h>

int main()
{
    int number1, number2, i, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    for(i = 1; i <= number1 && i <= number2; i++)
    {
        if(number1 % i == 0 && number2 % i == 0)
            gcd = i;
    }
    printf("GCD = %d", gcd);
    return 0;
}