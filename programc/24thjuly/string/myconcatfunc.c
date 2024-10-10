#include <stdio.h>
void concatStr(char *s1, const char *s2)
{
    int i;
    for(i = 0; s1[i]!= '\0';i++);
    s1[i]= ' ';
    i++;
    for(int j = 0; s2[j]!=0; j++,i++)
    {
        s1[i]=s2[j];
    }
    s1[i] = '\0';
}
int main()
{
    char s1[100], s2[100];
    printf("\n\tPlease enter your first string => ");
    scanf("%s", s1);
    printf("\n\tPlease enter your second string => ");
    scanf("%s", s2);
    concatStr(s1, s2);
    printf("\n\tYour final string is => %s", s1);
    return 0;
}