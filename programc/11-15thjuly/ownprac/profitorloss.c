#include <stdio.h>
void main()
{
    int pa, sa;
    printf("\n\tenter purch amount");
    scanf("%d", &pa);
    printf("\n\tenter sell amount");
    scanf("%d", &sa);
    if(pa > sa)
    {
        printf("You have loss");
    }
    else{
        printf("You have profit");
    }
}