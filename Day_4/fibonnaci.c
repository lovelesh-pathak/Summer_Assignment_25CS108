#include <stdio.h>
int main(){
    int n,first=0,second=1,number;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("%d\n%d",first,second);
    for(int i=2 ; i < n ; i++){
       number=first+second;
       first=second;
       second=number;
       
printf("\n %d",number);
                
    }
    return 0;
}