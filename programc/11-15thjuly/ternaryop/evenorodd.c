#include <stdio.h>
void main()
{
    // even or odd
    int no;
    printf("\n\tPlease enter your number := ");
    scanf("%d", &no);

    no%2 == 0 ? printf("Your number is Even") : printf("Your number is Odd");
}