#include <stdio.h>
void main()
{
    int pp, sp, amount;
    printf("\n\tPlease enter your pp := ");
    scanf("%d", &pp);
    printf("\n\tPlease enter your sp := ");
    scanf("%d", &sp);
    amount = pp-sp;
    amount > 0 ? printf("\n\tyou have profit") : amount < 0 ? printf("\n\tYou have loss") : printf("\n\tNo profit no loss");
}