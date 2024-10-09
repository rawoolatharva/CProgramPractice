// prgm to check if a number is pallindrome or not
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
        if(rev == temp)
        {
          printf("\n\t You have a Pallindrome number!!\n");
        }
        else
        {
          printf("\n\t Your number is not Pallindrome :(\n");
        }
        
    }
    else
    {
        printf("\n\tYour number is a single digit number and hence a higher number would be prefferd...");
    }
}