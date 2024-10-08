#include <stdio.h>
float areanperiCircle(float , float *, float *);
void main()
{
    float rad, area, peri;
    printf("\n\tPlease enter your circle's radius here => ");
    scanf("%f", &rad);
    areanperiCircle(rad, &area, &peri);
    printf("\n\tArea of your circle will be %0.2f\n", area);
    printf("\n\tPerimeter of your circle will be %0.2f", peri);
}
float areanperiCircle(float r, float *a, float *p)
{
    float pi = 3.14;
    *a = pi * (r * r);
    *p = 2 * pi * r;
} 