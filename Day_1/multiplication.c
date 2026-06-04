// Write a program to Print multiplication table of a given number.
#include <stdio.h>
int main(){
int number;
printf("Enter the Number");
scanf("%d", &number);
for(int i=1; i<=10; i++){
    printf("%d X %d = %d \n",number,i,number*i);
}
printf("Completed");
    return 0;
}