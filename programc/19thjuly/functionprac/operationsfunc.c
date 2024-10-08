#include <stdio.h>
int subtract(int , int, int *);
int multiply(int , int, int *);
int divide(int , int, int *);
int modulus(int , int, int *);
void main()
{
    int fno, sno, sub, mul, div, mod;
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number => ");
    scanf("%d", &sno);
    subtract(fno, sno, &sub);
    multiply(fno, sno, &mul);
    divide(fno, sno, &div);
    modulus(fno, sno, &mod);
    printf("\n\tThe subtraction of your numbers will be %d", sub);
    printf("\n\tThe multiplication of your numbers will be %d", mul);
    printf("\n\tThe division of your numbers will give us %d", div);
    printf("\n\tThe remainder of the division of your numbers will be %d\n", mod);
}
int subtract(int f, int s, int *sub)
{
   *sub = f - s;
}
int multiply(int f, int s, int *mul)
{
   *mul = f * s;
}
int divide(int f, int s, int *div)
{
   *div = f / s;
}
int modulus(int f, int s, int *mod)
{
   *mod = f % s;
}
