#include <stdio.h>
void main()
{
    int i,j = 0,temp,sum = 0, rem;
    printf("\n\tPlease enter your number here => ");
    scanf("%d", &i);
    temp = i;
    while(temp > 0)
    {
        temp = i/10;
        rem = i%10;
        sum = sum + rem;
        i = temp;
        j++;
    }
    printf("\n\t Your number is a %d digit number", j);
    printf("\n\t The summation of all digits of your number will be %d \n", sum);

}