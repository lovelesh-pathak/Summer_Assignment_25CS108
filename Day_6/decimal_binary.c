#include <stdio.h>
int main(){
    int number,rem,binary=0,b=1;
    printf("Enter the number");
    scanf("%d",&number);
    while(number>0){
    rem=number%2;
    binary=binary+rem*b;
    b=b*10;
    number=number/2;

    }
     printf("Binary number is %d\n",binary);
    return 0;
}