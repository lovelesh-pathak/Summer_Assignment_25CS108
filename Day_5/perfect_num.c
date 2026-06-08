#include <stdio.h>
int main(){
    int number ,perfect=0;
printf("Enter The number");
scanf("%d",&number);
for (int i = 1; i < number; i++)
{
    if(number%i==0){
        perfect=perfect+i;
    }
}
    if(number==perfect){
        printf("\n the number is perfect Number");
    }else{
        printf("\n the number is not Perfect number");
    }
return 0;

}