#include <stdio.h>
void main()
{
    int src, dest;
    printf("\n\tPlease enter your source number => ");
    scanf("%d", &src);
    printf("\n\tPlease enter your destination number => ");
    scanf("%d", &dest);
    for(src; src <= dest; src++)
    {
        printf("%5d", src);
    }
}