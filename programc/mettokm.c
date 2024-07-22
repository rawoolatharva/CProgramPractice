// program to convert distance from meters to kilometers
#include <stdio.h>
void main()
{
    float m, km;
    printf("\n\tPlease enter your distance in meters => ");
    scanf("%f", &m);
    km = m / 1000;
    printf("\n\tYour distance in kilo meters is => %0.4f", km);
}