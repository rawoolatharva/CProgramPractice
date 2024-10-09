#include <stdio.h>
void main()
{
    int fno, sno;
    printf("\n\tPlease enter your first number := ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number := ");
    scanf("%d", &sno);
    if(fno > sno)
        printf("\n\tYour first number is greater");
    else if(fno == sno)
        printf("\n\tBoth number are same");
    else
        printf("\n\tSecond is greater");
}