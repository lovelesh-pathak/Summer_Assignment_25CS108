// Write a programme to count digit of a number
#include <stdio.h>
int main(){
    int number,i=1;
    printf("Enter the digit");
    scanf("%d",&number);
while (number>10)
{
    number = number/10;
    i++;
}
printf("number of digits are %d",i);
    return 0;
}