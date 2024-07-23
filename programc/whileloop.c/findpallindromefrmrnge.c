// print addition of all numbers in a particular range
#include <stdio.h>
void main()
{
    int src, dest, temp, rem, rev = 0;
    printf("\n\tPlease enter your source number => ");
    scanf("%d", &src);
    printf("\n\tPlease enter your destination number => ");
    scanf("%d", &dest);
    if(src <  dest)
    {
        while(src <= dest)
        {
            temp = src;
            while( src != 0)
            {             
                rem = src % 10;
                src = src / 10;
                rev = rev*10 + rem;
            }
            if(rev == temp)
            {
                printf("\n\t%d", temp);
            }
            rev = 0;
            src = temp;
            src++;
        }
        // printf("\n\tThe summation of numbers between your range is %d", sum);
    }
    // else if(src >  dest)
    // {
    //     while(src >= dest)
    //     {
    //         sum = sum + src;
    //         src--;
    //     }
    //     printf("\n\tThe summation of numbers between your range is %d", sum);
    // }
    // else
    // {
    //     printf("\n\t either both src and dest are same or its not a valid number");
    // }
    // printf("\n");
}