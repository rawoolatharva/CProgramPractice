#include <stdio.h>
void main()
{
    int i =2, no, src, dest;
    printf("\n\tPlease enter your source number => ");
    scanf("%d", &src);
    printf("\n\tPlease enter your destination number => ");
    scanf("%d", &dest);
    //srctodest program
    if(src <  dest)
    {
        while(src <= dest)
        {
            while(i < src)
            {
                if(src%i == 0)
                {
                    printf("\n\tNot a prime number");
                    break;
                }
                i++;
            }
            if(i==src)
            {
                printf("\n\tIt is a prime number"); 
            }
            src++;
        }
    }
    else if(src >  dest)
    {
        while(src >= dest)
        {
            while(i < src)
            {
                if(src%i == 0)
                {
                    printf("\n\tNot a prime number");
                    break;
                }
                i++;
            }
            if(i==src)
            {
                printf("\n\tIt is a prime number"); 
            }
            src--;
        }
    }
    else
    {
        printf("\n\t either both src and dest are same or its not a valid number");
    }
    //prime program(rem to remove)
    while(i < no)
    {
        if(no%i == 0)
        {
            printf("\n\tNot a prime number");
            break;
        }
        i++;
    }
    if(i==no)
    {
        printf("\n\tIt is a prime number"); 
    }
}