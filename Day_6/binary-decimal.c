#include<stdio.h>
#include<math.h>
int main()
{
    int binary,number=0,rem;
     int i=0;
    printf("Enter the binary number:");
    scanf("%d",&binary);
    while(binary!=0)
    {
        rem=binary%10;  

    number+=rem*pow(2,i);    
       binary=binary/10;      
        i++;                  
    } printf("Decimal number is %d\n",number);
    return 0;
}