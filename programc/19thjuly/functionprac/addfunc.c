// function for adding two user inputs using pointer and showing result on client side without returning
#include <stdio.h>
int add(int,int, int *);
int main()
{
    int fno, sno, sum;
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number => ");
    scanf("%d", &sno);
    add(fno,sno, &sum);
    printf("\n\t%d + %d = %d\n", fno, sno, sum);
}
int add(int f,int s, int *sm)
{
    *sm = f + s;
}