// print table of any number
#include <stdio.h>
void main()
{
        int i=1, n;
        printf("\n\tPlease enter the number of your choice here => ");
        scanf("%d", &n);
        while (i <= 10)
        {
            printf("\n\t%d", i*n);
            i++;
        }
        printf("\n");
}