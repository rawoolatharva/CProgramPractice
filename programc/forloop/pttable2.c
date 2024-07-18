#include <stdio.h>
void main()
{
    int i, n=2, temp;
    for(i = 1; i <=10; i++)
    {
        temp = i*n;
        printf("%4d", temp);
    }
    printf("\n");
}