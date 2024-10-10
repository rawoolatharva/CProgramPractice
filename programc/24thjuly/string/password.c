#include <stdio.h>
void main()
{
    char arr[30];
    char ch;
    int i = 0;
    printf("\n\tenter your password => ");
    while(1)
    {
        scanf(" %c", &ch);
        if(ch == 13)
        {
            break;
        }
        printf("*");
        arr[i]= ch;
        i++;
    }
    arr[i] = '\0';
    printf("\n\tYour password is => %s", arr);
}