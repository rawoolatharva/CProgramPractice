// add numbers from 1 to 10
#include <stdio.h>
void main()
{
    int i = 1, sum;
    while(i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("\n\tThe summation from 1 to 10 is %d\n", sum);
}