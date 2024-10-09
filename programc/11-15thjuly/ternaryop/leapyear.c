#include <stdio.h>
void main()
{
    int year;
    printf("\n\tPlease enter your year := ");
    scanf("%d", &year);
    year%4 == 0 && year % 100 != 0 || year % 400 == 0 ? printf("\n\tYES, Leap year") : printf("\n\tNOT, leap year");
}