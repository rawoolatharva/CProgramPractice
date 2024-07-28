#include <stdio.h>
int factorial(int);
void main()
{
    int no, fact;
    printf("\n\tPlease enter your number here => ");
    scanf("%d", &no);
    fact = factorial(no);
    printf("\n\tThe factorial for your number is => %d", fact);
}
int factorial(int n)
{
    int prod = 1;
    for(int i = 2 ; i <= n; i++)
    {
        prod = prod * i;
    }
    return prod;
}    