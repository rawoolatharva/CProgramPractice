#include <stdio.h>
#include <string.h>
void main()
{
    char arr[30];
    int i;
    printf("\n\tPlease enter your string:= ");
    scanf("%s", arr);
    i = strlen(arr);    //string length
    printf("\n\tlength of your string is := %d", i);
}