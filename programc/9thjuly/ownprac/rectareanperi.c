//program to calc area and perimeter of a rectangle
#include <stdio.h>
void main()
{
    int l, b, area, peri;
    printf("\n\tPlease enter length for your rectangle :=> ");
    scanf("%d", &l);
    printf("\n\tPlease enter breadth for your rectangle :=> ");
    scanf("%d", &b);
    area = l * b;
    peri = 2*(l+b);
    printf("\n\tThe Area of your rectangle will be %d", area);
    printf("\n\tThe Perimeter of your rectangle will be %d\n", peri);
}