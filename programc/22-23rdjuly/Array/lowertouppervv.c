// program to convert your string from lower to upper and vice versa
#include <stdio.h>
void main()
{
    char arr[10];
    int i = 0;
    printf("\n\tPlease enter your charaters here => ");
    scanf("%s", arr);
    while(arr[i] != '\0')
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            // here the character value will implicitly convert to its ascii value which is an integer since it is upcasting
            arr[i] = arr[i] - 32;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            // here the character value will implicitly convert to its ascii value which is an integer since it is upcasting
            arr[i] = arr[i] + 32;
        }
        i++;
    }
    printf("\n\tYour string is converted to : %s\n", arr);
} 
