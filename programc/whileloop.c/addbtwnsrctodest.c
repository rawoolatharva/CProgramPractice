// print addition of all numbers in a particular range
#include <stdio.h>
void main()
{
    int src, dest, sum = 0;
    printf("\n\tPlease enter your source number => ");
    scanf("%d", &src);
    printf("\n\tPlease enter your destination number => ");
    scanf("%d", &dest);
    if(src <  dest)
    {
        while(src <= dest)
        {
            sum = sum + src ;
            src++;
        }
        printf("\n\tThe summation of numbers between your range is %d", sum);
    }
    else if(src >  dest)
    {
        while(src >= dest)
        {
            sum = sum + src;
            src--;
        }
        printf("\n\tThe summation of numbers between your range is %d", sum);
    }
    else
    {
        printf("\n\t either both src and dest are same or its not a valid number");
    }
    printf("\n");
}