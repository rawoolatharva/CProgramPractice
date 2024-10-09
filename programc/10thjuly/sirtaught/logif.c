#include <stdio.h>
void main()
{
    // pgm for logical op if-elseif statement
    int fno, sno, tno;
    printf("\n\tPlease enter your first number := ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number := ");
    scanf("%d", &sno);
    printf("\n\tPlease enter your third number := ");
    scanf("%d", &tno);
    if(fno == sno && sno == tno)
        printf("\n\tAll r same");
    else
        printf("\n\tNot same");
}