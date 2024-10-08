#include <stdio.h>

void main()
{
    int i = 1, n;
    printf("\n\t Please enter the number whose table you want to print => ");
    scanf("%d", &n);
    while (i <= 10)
    {
       printf("%5d", i*n);
       i++;
    }
}