#include <stdio.h>
void main()
{
    int no;
    printf("\n\tPlease enter your num => ");
    scanf("%d", &no);
    if(no % 2 == 0)
    {
        printf("\n\t Your number is even");
    }
    else
       printf("\n\t Your number is odd"); 
}