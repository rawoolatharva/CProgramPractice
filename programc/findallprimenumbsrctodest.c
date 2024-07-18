#include <stdio.h>
void main()
{
    int i =2, src, dest,temp;
    printf("\n\tPlease enter your source number => ");
    scanf("%d", &src);
    printf("\n\tPlease enter your destination number => ");
    scanf("%d", &dest);
        temp = src;
        // when dest is greater than src
         while(src <= dest)
        {
            while(i < src)
            {
              if(src % i == 0)
                {
                  // printf("\n\t%d is not a prime number...", src);
                  break;
                }
                i++;
            }
            if(i==src)
            {
                printf("\n\t%d", src);
            }
          i=2;  
          src++;
        }
        src = temp;
        //when src is greater than dest
         while(src >= dest)
        {
            while(i < src)
            {
              if(src % i == 0)
                {
                  // printf("\n\t%d is not a prime number...", src);
                  break;
                }
                i++;
            }
            if(i==src)
            {
                printf("\n\t%d", src);
            }
          i=2;  
          src--;
        }
}