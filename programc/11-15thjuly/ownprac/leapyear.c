#include <stdio.h>
void main()
{
    // leap year program simplified
    int year;
    printf("\n\tPlease enter your year => ");
    scanf("%d", &year);

    if(year%4 == 0 && year%100 != 0 || year%400 == 0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year", year);

    // ***********************************************************************************************************
    // // leap year program without logical operators
    // int year;
    // printf("\n\tPlease enter your year => ");
    // scanf("%d", &year);

    // if(year % 4 == 0)
    // {
    //     if(year % 100 == 0)
    //     {
    //         if(year % 400)
    //         {
    //             printf("%d is a leap year.\n", year);   
    //         }
    //         else
    //         {
    //             printf("%d is not a leap year", year);
    //         }
    //     }
    //     else
    //     {
    //         printf("%d is a leap year.\n", year);
    //     }
    // }    
    // else
    //     printf("%d is not a leap year", year);
}

