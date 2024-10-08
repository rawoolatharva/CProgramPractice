#include <stdio.h>
#include "subtract.h"
#include "multiply.h"
#include "divide.h"
#include "modulus.h"

void main()
{
    int fno, sno, sub, mul, div, mod;
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number => ");
    scanf("%d", &sno);
    sub = subtract(fno, sno);
    mul = multiply(fno, sno);
    div = divide(fno, sno);
    mod = modulus(fno, sno);
    printf("\n\tThe subtraction of your numbers will be %d", sub);
    printf("\n\tThe multiplication of your numbers will be %d", mul);
    printf("\n\tThe division of your numbers will give us %d", div);
    printf("\n\tThe remainder of the division of your numbers will be %d\n", mod);
}