#include <stdio.h>
#define exp(x,y,z) x-y*z
void main()
{
    int fno,sno,tno, sol;
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your sno number => ");
    scanf("%d", &sno);
    printf("\n\tPlease enter your tno number => ");
    scanf("%d", &tno);
    sol = exp(fno,sno,tno);
    printf("Your final value is :- %d\n", sol);
}