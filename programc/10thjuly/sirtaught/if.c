#include <stdio.h>
void main()
{
    // pgm for if statement
    int fno, sno;
    printf("\n\tPlease enter your first number := ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number := ");
    scanf("%d", &sno);
    if(fno > sno)
        printf("\n\tYour first number is greater");
}