#include <stdio.h>
void main()
{
    int src, dest;
    printf("\n\tPlease enter your source number => ");
    scanf("%d", &src);
    printf("\n\tPlease enter your destination number => ");
    scanf("%d", &dest);
    if(src <  dest)
    {
        while(src <= dest)
        {
            printf("%5d", src);
            src++;
        }
    }
    else if(src >  dest)
    {
        while(src >= dest)
        {
            printf("%5d", src);
            src--;
        }
    }
    else
    {
        printf("\n\t either both src and dest are same or its not a valid number");
    }
    printf("\n");
}