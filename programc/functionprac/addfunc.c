#include <stdio.h>
void main()
{
    int fno, sno, sum = 0;
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number => ");
    scanf("%d", &sno);
    // here we will store the returned summation into our sum variable
    sum = add(fno,sno);
    printf("\n\t%d + %d = %d\n", fno, sno, sum);
}
add(int f,int s)
{
    int sm;
    sm = f + s;
    return sm;
}