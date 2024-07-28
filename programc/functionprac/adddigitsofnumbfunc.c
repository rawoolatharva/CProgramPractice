#include <stdio.h>
int addDigits(int , int *);
void main()
{
    int no, sum = 0;
    printf("\n\tPlease enter a number more than single digit number here => ");
    scanf("%d", &no);
    addDigits(no, &sum);
    printf("\n\tThe summation of the digits of your number is => %d", sum);
}
int addDigits(int n, int *sm)
{
    int rem;
    for(int i = 0; n != 0; i++)
    {
        rem = n % 10;
        n = n / 10;
        *sm = *sm + rem;
    }
}    