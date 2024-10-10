// using standard function of string concat
#include <stdio.h>
#include <string.h>
void main()
{
    char first[30], second[30];
    printf("\n\tPlease enter your first string => ");
    scanf("%s", first);
    printf("\n\tPlease enter your second string => ");
    scanf("%s", second);
    strcat(first, second);
    printf("\n\tConcatination Result is := %s", first);
}