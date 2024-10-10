// strcmp function is for string comparison
// stcmp func will give us 0 if both strings are same
#include <stdio.h>
#include <string.h>
void main()
{
    int i;
    char first[30], second[30];
    printf("\n\tenter your first string => ");
    scanf("%s", first);
    printf("\n\tenter your second string => ");
    scanf("%s", second);
    i = strcmp(first, second);
    if(i==0)
    {
        printf("\n\tBoth r same");
    }
    else
    {
        printf("\n\tNot Same");
    }
}