// program to perform add, sub, multiply and divide operations
#include <stdio.h>
void main()
{
    int fno,sno, add, sub, mul, div, mod;
    //add,sub,mul,div,modulus
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number => ");
    scanf("%d", &sno);
    add = fno+sno;
    sub = fno -sno;
    mul = fno * sno;
    div = fno/sno;
    mod = fno%sno;
    printf("\n\tThe addition of your numbers is => %d", add);
    printf("\n\tThe subtraction of your numbers is => %d", sub);
    printf("\n\tThe multipication of your numbers is => %d", mul);
    printf("\n\tThe division of your numbers is => %d", div);
    printf("\n\tThe modulus of your numbers is => %d", mod);
}

