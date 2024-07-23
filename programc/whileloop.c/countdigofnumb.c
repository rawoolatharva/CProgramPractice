// prgm to count digits of a number
#include <stdio.h>
void main()
{
    int no, temp, rem, count = 0;
    printf("\n\tPlease enter your number (2digit or 3digit)=> ");
    scanf("%d", &no);
    if(no > 10)
    {
        temp = no;
        while( no != 0)
        {             
          rem = no % 10;
          no = no / 10;
          count++;
        }
        printf("\n\t Count of the digits of %d will be %d\n", temp, count);
    }
    else
    {
        printf("\n\tYour number is a single digit number and hence a higher number would be prefferd...");
    }
}