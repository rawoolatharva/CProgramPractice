#include <stdio.h>
void main()
{
    int phy, chem, bio, eng, mar, his,total;
    float perc;
    printf("\n\tPlease enter your marks in physics, chemistry, biology, english , marathi and history in the respective order => ");
    scanf("%d,%d,%d,%d,%d,%d", &phy,&chem,&bio,&eng,&mar,&his);
    total = phy+chem+bio+eng+mar+his;
    perc = (total/600.0)*100 ;
    printf("\n\tYour total marks are : %d", total);
    printf("\n\tYour percentage is : %0.2f", perc);
}


