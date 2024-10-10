#include <stdio.h>
#include <string.h>
void main()
{
    char first[30], second[30];
    printf("\n\tenter your first string => ");
    scanf("%s", first);
    printf("\n\tyour first string is => %s", first);
    strcpy(second, first); //string copy func
    printf("\n\tyour second string is => %s", second);
}