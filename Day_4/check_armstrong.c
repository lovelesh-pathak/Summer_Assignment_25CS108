
#include <stdio.h>
#include <math.h>
int main(){
    int i=0,sum=0,number,check,number_again,n;

    printf("enter the number to be checked");
    scanf("%d",&number);
    
    check = number;
    number_again = number;
    
    while(number>0){                            //to count the digits (for the power)
       number= number/10;
        i++ ;
    }

while(number_again>0)                          // to multiply the digits with their respective power
{
    n=number_again%10;
    sum=sum+pow(n ,i);
    number_again=number_again/10;
}

if(check==sum){                                // to compare the number
    printf("This is armstrong number");

}else{
    printf("This is not armstrong number");
}


    return 0;

}