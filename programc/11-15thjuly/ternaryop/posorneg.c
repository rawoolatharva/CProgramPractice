#include <stdio.h>
void main()
{
    // pos or neg
    int no;
    printf("\n\tPlease enter your number := ");
    scanf("%d", &no);

    no > 0 ? printf("Number is Positive") : no < 0 ? printf("Number is Negative") : printf("Number is 0");
}