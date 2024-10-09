#include <stdio.h>
void main()
{
    int n;
    do
    {
        printf("\n\tPlease enter a odd number => ");
        scanf("%d", &n);
    }
    while(n  % 2 == 0);
    {
        printf("\n\tYour odd number is => %d", n);
    }
}