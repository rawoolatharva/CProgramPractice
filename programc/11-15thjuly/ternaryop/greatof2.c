#include <stdio.h>
void main()
{
    // greater number with ternary op
    int fno, sno;
    printf("\n\tPlease enter your first number := ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number := ");
    scanf("%d", &sno);
    fno>sno ? printf("\n\tfno is greater") : sno>fno ? printf("\n\tsno is greater") : printf("\n\tBoth are Same");
}