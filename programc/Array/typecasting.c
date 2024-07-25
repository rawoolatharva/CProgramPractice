// demo program to show typecasting 
#include <stdio.h>
float add(float, float);
void main()
{
    int fno, sno, sum;
    printf("\n\tPlease enter your first number here : ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number here : ");
    scanf("%d", &sno);
    // since we are getting a return value of sm in float we need to downcast it to int and have to explicitly mention the same
    sum = (int)add(fno, sno);
    printf("\n\tThe sum of your two numbers is : %d\n", sum);
}
float add(float f, float s)
{
    float sm;
    sm = f + s;
    return sm;
}