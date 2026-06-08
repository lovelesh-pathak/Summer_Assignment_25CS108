#include<stdio.h>
int main()
{
    int number,prime=0,c;
    printf("Enter the number:");
    scanf("%d",&number);
    
    
        for(int i=1;i<=number;i++)        
        {
            if(number%i==0)
            {
               c=0;
               for(int j=1;j<=i;j++)  
               {
                  if(i%j==0)
                    c++;
               }
                if(c==2&&i>prime)   
                prime=i;
            }
        }
        printf("The largest prime factor of number %d is %d\n",number,prime);
                            
        return 0;
}