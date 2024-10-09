#include<stdio.h>
void main()
{
    int fno, sno;
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number => ");
    scanf("%d", &sno);
    // priting before swapping
    printf("\n\tyour first number before swap=> %d", fno);
    printf("\n\tyour second number before swap => %d", sno);
    // second way of swapping without a third var
    fno = fno + sno;
    sno = fno - sno;
    fno = fno - sno;
    // printing the swapped numbers
    printf("\n\tyour first number after swap=> %d", fno);
    printf("\n\tyour second number after swap => %d", sno);
}