#include <stdio.h>
void copystring(const char *f, char *s)
{
    while(*f != '\0')
    {
        *s = *f;
        s++;
        f++;
    }
    *s = '\0';
}
int main()
{
    char first[10], second[10];
    printf("\n\tenter your first string => ");
    scanf("%s", first);
    printf("\n\tYour first string is => %s", first);
    copystring(first, second);
    printf("\n\tYour second string is => %s", second);
    return 0;
}