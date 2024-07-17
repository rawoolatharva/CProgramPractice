#include <stdio.h>
void main()
{
    int i = 2, n;
    while (i <= 10)
    {
        n=1;
        while(n<=10)
        {
          printf("%5d", i*n);
          n++;
        }
        printf("\n");
       i++;
    }
}