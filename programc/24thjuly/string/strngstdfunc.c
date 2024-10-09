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
    // strstr(arr); //string upper
    // printf("\n\t ur string in uppercase is => %s", arr);
    // strlen(arr); //string lower
    // printf("\n\t ur string in lowercase is => %s", arr);
    // strsep(arr);//string reverse
    // printf("\n\t REverse of your string will be => %s", arr);
}