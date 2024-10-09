#include <stdio.h>
void main()
{
    int fno, sno, sum;
    char choice = 'y';
    do
    {
        printf("\n\tEnter first number := ");
        scanf("%d", &fno);
        printf("\n\tEnter second number := ");
        scanf("%d", &sno);
        sum = fno + sno;
        printf("\n\t%d + %d := %d", fno, sno, sum);
        printf("\n\tDo you want to continue? [y/n] := ");
        scanf(" %c", &choice);
    }
    while(choice == 'y' || choice == 'Y');
}