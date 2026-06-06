#include <stdio.h>
int main(){
    int number,check=1;
    printf("enter the number");
    scanf("%d",&number);
    if(number==1){
        printf("not allowed");
    }
    for (int i = 2; i < number; i++)
    {
       if( number%i==0)
       {
        check=0; //not prime
    } 
    }
    if (check==0)
    {
        printf("not prime");
    }
  else
    {
        printf("prime");
    }
    return 0;
}
