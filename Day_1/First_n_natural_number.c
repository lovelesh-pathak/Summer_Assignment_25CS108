// Write a program to Calculate sum of first N natural numbers

#include <stdio.h>
int main()
{
  int number, sum = 0;
  printf("Enter the Number");
  scanf("%d", &number);
  for (int i = 0; i <= number; i++)
  {
    sum = sum + i;
  }
  printf("your sum of First N natural Number is %d", sum);
  return 0;
}