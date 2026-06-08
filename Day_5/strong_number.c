#include <stdio.h>
int main(){
    int number,temp ,last_digit,factorial;
printf("Enter The number");
scanf("%d",&number);
temp=number;
while(number>0){
    last_digit=0;
last_digit=number%10;
    number=number/10;
for(int i=1 ; i<last_digit ; i++){
    factorial=1*i;
}
factorial=0+factorial;

}
if(factorial==temp){
    printf("the number is strong number");

}else{
    printf("the number is not strong number");
}
return 0;
}