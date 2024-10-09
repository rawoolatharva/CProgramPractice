#include <stdio.h>
void main()
{
    // switch case for different opperations
    int fno, sno, sum, n, sq, cube, rad;
    float pi = 3.14, area, peri;
    char choice;
    printf("\n\tA.Addition\n\tS.Square&Cube\n\tC.Area of Circle\n");
    scanf("%c", &choice);

    switch(choice)
    {
        case 'a':
        case 'A':
            printf("\n\tPlease enter your first number => ");
            scanf("%d", &fno);
            printf("\n\tPlease enter your second number => ");
            scanf("%d", &sno);
            sum = fno + sno;
            printf("\n\tThe summation of your two numbers is => %d", sum);
            break;
        case 's':
        case 'S':
            printf("\n\tEnter your number here => ");
            scanf("%d", &n);
            sq = n*n;
            printf("\n\tSquare of your number is => %d",sq);
            cube = n*n*n;
            printf("\n\tCube of your number is => %d",cube);
            break;
        case 'c':
        case 'C':
            printf("\n\tPlease enter your radius number => ");
            scanf("%d", &rad);
            area = pi * rad * rad;
            peri = 2 * pi * rad;
            printf("\n\tyour area will be=> %0.2f", area);
            printf("\n\tyour peri will be => %0.2f", peri); 
            break;
        default:
            printf("\n\t Option is NOT Available");            
    }
}