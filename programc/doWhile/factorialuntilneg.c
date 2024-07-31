// calculate factorial for user input until the user enters a negative value in which case we will exit the code
#include <stdio.h>
void main()
{
    int i, prod, no;
    do
    {
        i=2, prod =1;
        printf("\n\tPlease enter the number to check its factorial here => ");
        scanf("%d", &no);
        if( no >=0)
        {
           while(i <= no)
            {
                prod = prod * i;
                i++;
            }
           printf("\n\tThe factorial for your number will be %d\n", prod);
        }    
    }
    while(no >= 0);
    printf("\n\tExiting ....\n");
}