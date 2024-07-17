#include <stdio.h>
void main()
{
    int src, dest, n;
    printf("\n\tPlease enter your source number => ");
    scanf("%d", &src);
    printf("\n\tPlease enter your destination number => ");
    scanf("%d", &dest);
    if (src < dest)
    {
       while (src <= dest)
        {
            n=1;
            while(n<=10)
            {
            printf("%5d", src*n);
            n++;
            }
            printf("\n");
            src++;
        }
    }
    else if (src > dest)
    {
       while (src >= dest)
        {
            n=1;
            while(n<=10)
            {
            printf("%5d", src*n);
            n++;
            }
            printf("\n");
            src--;
        }
    }
    else
     {
        printf("\n\t either both src and dest are same or its not a valid number");
     }
     printf("\n");
}