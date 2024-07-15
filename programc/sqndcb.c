#include <stdio.h>
//accept a number and print square and cube of that number
void main()
{
    int i, sq, cb;
    //accept a number from user
    printf("\n\tPlease enter your number here => ");
    scanf("%d", &i);
    sq = i * i;
    cb = sq * i;
    printf("\n\tThe Square for your number is => %d", sq);
    printf("\n\tThe Cube for your number is => %d \n", cb);
    getchar();
}