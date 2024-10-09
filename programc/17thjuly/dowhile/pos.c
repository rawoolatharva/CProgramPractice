#include <stdio.h>
void main()
{
    // accept number until positive int
    int no;
    do
    {
        printf("\n\tPlease enter a positive integer => ");
        scanf("%d", &no);
    }
    while(no <= 0);
    {
        printf("\n\tYour positive integer is => %d", no);
    }
}