#include <stdio.h>
int strlength(char *);

int strlength(char *a)
{
    int l = 0;
    // now lets increase the length till we reach the last char of string array
    while (*a != '\0')
    {
        l++;
        a++;
    }
    return l;
}
void main()
{
    char arr[] = "dgsfsdhghr h";
    int length;
    length = strlength(arr);
    // now we print the length
    printf("\n\tThe length of your string array is := %d", length);
}