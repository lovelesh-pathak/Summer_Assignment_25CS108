// Write a program to Find factorial of anumber.
#include <stdio.h>
int main(){
    int number,factorial=1;
    printf("enter the number");
    scanf("%d",&number);
    for(int i=1; i<=number; i++){
        factorial=factorial*i;
    }
    printf("factorial of number is %d",factorial);
    return 0;
}