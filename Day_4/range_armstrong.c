
#include <stdio.h>
#include <math.h>
int main(){
    int i,sum,first_number,Last_number,check,number_again,n,duplicate;

    printf("enter the first number of the range to be checked");
    scanf("%d",&first_number);
    

    printf("enter the Last number of the range to be checked");
    scanf("%d",&Last_number);
for(int j=first_number; j<=Last_number ; j++ ){
     i=0;                                            //i should be reset for every loop
    sum=0;                                           //sum should be reset for every loop
    check = j;
    number_again = j;
    duplicate=j;                                     //if j is directly used then loop wot work properly
    
    while(duplicate>0){                            //to count the digits (for the power)
        duplicate = duplicate/10;
        i++ ;
    }

while(number_again>0)                          // to multiply the digits with their respective power
{
    n=number_again%10;
    sum=sum+pow(n ,i);
    number_again=number_again/10;
}

if(check==sum){                                // to check the number
    printf(" \n %d This is armstrong number",j);

}else{
    printf("  \n %d This is not armstrong number",j);
}
}

    return 0;

}