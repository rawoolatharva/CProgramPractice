#include <stdio.h>
void main()
{
    int pr, np, discam;
    printf("\n\tPlease enter price of t-shirt => ");
    scanf("%d", &pr);
    // calculating net price at 15% discount
    discam = pr *0.15;
    np = pr - discam;
    printf("\n\t Net price of your t-shirt at 15 perc disc will be => %d", np);
}