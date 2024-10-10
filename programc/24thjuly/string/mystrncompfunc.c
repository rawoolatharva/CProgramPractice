#include <stdio.h>
int mystrcomp(char *f, char *s)
{
    // loop through each characters of both strings
    while(*f != '/0' || *s != '/0')
    {
        if(*f == *s)
        {
            f++;
            s++;
        }
        else
        {
            return f-s;
        }
    }
    return 0;
}
void main()
{
    char first[20],second[20];
    int i;
    printf("\n\tenter your first string = ");
    scanf("%s", first);
    printf("\n\tenter your second string = ");
    scanf("%s", second);
    i = mystrcomp(first, second);
    if(i==0)
    {
        printf("\n\tBoth strings are same");
    }
    else
    {
        printf("\n\tNot Same");
    }

}