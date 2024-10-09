#include <stdio.h>
void main()
{
    float pi = 3.14, rad, area, peri;
    printf("\n\tPlease Enter a radius for your circle => ");
    scanf("%f", &rad);
    area = pi * (rad*rad);
    peri = 2 * pi * rad;
    printf("\n\tThe Area for your circle is %0.2f", area);
    printf("\n\tThe Perimeter for your circle is %0.2f", peri);
}