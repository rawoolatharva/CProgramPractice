#include <stdio.h>
void main()
{
    int i =2, no;
    // printf("\n\tPlease enter your source number => ");
    // scanf("%d", &src);
    // printf("\n\tPlease enter your destination number => ");
    // scanf("%d", &dest);
    printf("\n\tPlease enter your number => ");
    scanf("%d", &no);
        while(i < no)
        {
           if(no % i == 0)
           {
            printf("\n\tNo! It is not a prime number...");
            break;
           }
           i++;
        }
        if(i==no)
          printf("\n\tYes! It is a prime number...");
}