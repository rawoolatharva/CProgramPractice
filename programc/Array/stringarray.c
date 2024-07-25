// string array
#include <stdio.h>
void main()
{
    char first[] = {'p','u','n','e','\0'};
    char second[] = "mumbai";
    char third[30];

    printf("\n\tFirst String is => %s", first);
    printf("\n\tSecond String is => %s", second);
    printf("\n\tPlease enter your third string => ");
    scanf("%s", third);
    printf("\n\tYour third string is => %s", third);
}