#include <stdio.h>
void main()
{
    // greater of 3 numbers
    int fno, sno, tno;
    printf("\n\tPlease enter your first number := ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number := ");
    scanf("%d", &sno);
    printf("\n\tPlease enter your third number := ");
    scanf("%d", &tno);
    fno>sno && fno>tno ? printf("\n\tFirst num is greater"): sno>fno && sno>tno ? printf("\n\tSecond is greater") : tno>fno && tno>sno ? printf("\n\tThird is greater") :
    printf("\n\tAll r same");
}