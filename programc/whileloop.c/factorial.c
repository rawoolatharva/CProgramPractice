// find the factorial for any number
#include <stdio.h>
void main()
{
    int i = 2, prod = 1, no;
    printf("\n\tPlease enter the number here => ");
    scanf("%d", &no);
    while(i <= no)
    {
        prod = prod * i;
        i++;
    }
    printf("\n\tThe factorial for your number will be %d\n", prod);
}