#include <stdio.h>
void main()
{
    int no;
    printf("\n\tPlease enter your num => ");
    scanf("%d", &no);
    if(no > 0)
    {
        printf("\n\t Your number is positive");
    }
    else
       printf("\n\t Your number is negative"); 
}