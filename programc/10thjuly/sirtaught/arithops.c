#include <stdio.h>
void main()
{
     // arithematic oprs
    int fno, sno;
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number => ");
    scanf("%d", &sno);
    printf("\n\t Here 0 will be false and 1 will be true");
    printf("\n\t%d < %d := %d", fno, sno, fno<sno);
    printf("\n\t%d > %d := %d", fno, sno, fno>sno);
    printf("\n\t%d <= %d := %d", fno, sno, fno<=sno);
    printf("\n\t%d >= %d := %d", fno, sno, fno>=sno);
    printf("\n\t%d == %d := %d", fno, sno, fno==sno);
    printf("\n\t%d != %d := %d", fno, sno, fno!=sno);
}