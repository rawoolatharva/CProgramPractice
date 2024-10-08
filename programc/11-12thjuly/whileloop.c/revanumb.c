// reverse a number 
#include <stdio.h>
void main()
{
    int no, temp, rem, rev = 0;
    printf("\n\tPlease enter your number (2digit or 3digit)=> ");
    scanf("%d", &no);
    if(no > 10)
    {
        temp = no;
        while( no != 0)
        {             
          rem = no % 10;
          no = no / 10;
          rev = rev*10 + rem;
        }
        printf("\n\t Reverse of %d will be %d\n", temp, rev);
    }
    else
    {
        printf("\n\tYour number is a single digit number and hence a higher number would be prefferd...");
    }
}