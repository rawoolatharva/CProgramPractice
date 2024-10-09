#include <stdio.h>
void main()
{
    // check if three points coordinates fall on the same line
    float x1, y1, x2, y2, x3, y3, slopem, slopen;

    printf("\n\tEnter your points (x1, y1) => ");
    scanf("%f%f", &x1, &y1);
    printf("\n\tEnter your points (x2, y2) =>");
    scanf("%f%f", &x2, &y2);
    printf("\n\tEnter your points (x3, y3)");
    scanf("%f%f", &x3, &y3);
    slopem = (y2-y1)/(x2-x1);
    slopen = (y3 - y2)/(x3-x2);
    if(slopem == slopen)
    {
        printf("\n\tAll three points lie on the same line");
    }
    else
    {
        printf("\n\tpoints DONT lie on same line");
    }
}