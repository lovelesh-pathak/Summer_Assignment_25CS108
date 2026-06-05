//  Write a program to Check whether a number is palindrome
#include <stdio.h>
int main(){
      int number, rev=0 , num , check;
    printf("enter the number");
scanf("%d",&number);
check=number;
while (number>0)
{
    num=number%10;
    number=number/10;
    rev=rev*10+num;
   
}
if (check==rev)
{
  printf("the number is pallindrome");
}
else 
 printf("not pallindrome");


    return 0;
}