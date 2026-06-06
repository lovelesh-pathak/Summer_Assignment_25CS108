#include <stdio.h>

int main()
{
    int start, end, i, j, check;

    printf("Enter range starting number: ");
    scanf("%d", &start);
    printf("Enter range ending number: ");
    scanf("%d", &end);
    for(i = start; i <= end; i++)
    {
        if(i < 2)
            continue;

        check = 1;
        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
             check = 0;
        break;
            }
        }
        if(check)
            printf("%d ", i);
    }

    return 0;
}