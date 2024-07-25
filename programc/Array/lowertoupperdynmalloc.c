// program to convert char values in an array to their ascii values
#include <stdio.h>
void main()
{
    char arr[5], temp[5];
    int i = 0;
    printf("\n\tPlease enter your charaters here => ");
    for(int i =0; i < 5; i++)
    {
        scanf("%c", &arr[i]);
    }
    temp[5] = arr[5];
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
    printf("Your input array : ");
    for (int j = 0; j < 5 ; j++)
    {
        printf("%c", temp[j]);
    }
    printf("Now looks like this : ");
    for (int k = 0; k < 5; k++)
    {
        printf("%c", arr[k]);
    }
    
} 
