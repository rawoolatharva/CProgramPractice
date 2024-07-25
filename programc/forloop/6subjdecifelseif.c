// we will accept 6 subject marks and as per a few conditions will determine the answers
#include <stdio.h>
#define size 6
void main()
{
    int subjs[size], passMark = 35, count = 0, total = 0, grandtotal = 600;
    float perc;
    printf("\n\tPlease enter your marks in physics, chemistry, biology, geography, history and english in the respective order => ");
    // we will accept the subj marks in a loop and store it in our subjs array
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &subjs[i]);
    }
    // now we will loop through our array and individually check the subjects to see if we have failed in any subj
    for (int j = 0; j < size; j++)
    {
        total = total + subjs[j];
        if(subjs[j] < passMark)
        {
           //we will count the number of subj the student has failed in 
           count++;
        }
    }
    if(count > 3)
    {
        printf("\n\tYou have FAILED this semester...");
    }
    else if(count == 0)
    {
        perc = (float)total / (float)grandtotal;
        printf("\n\tYour percentage for this semester is: %0.2f", perc*100);
    }
    else if(count <= 3)
    {
       printf("\n\tYou have ATKT in %d subjects...", count);
    }
    printf("\n"); 
}