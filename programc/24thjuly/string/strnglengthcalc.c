#include <stdio.h>
void main()
{
    char arr[] = "vkvshsv ch";
    int length = 0;
    // now lets increase the length till we reach the last char of string array
    for (int i = 0; arr[i] != '\0'; i++)
    {
        length++;
    }
    // now we print the length
    printf("\n\tThe length of your string array is := %d", length);
}