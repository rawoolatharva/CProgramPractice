#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr1, *arrcopy, no;
    printf("\n\tHow many numbers you want in your array? => ");
    scanf("%d", &no);

    arr1 = (int*)malloc(sizeof(int) * no);

    printf("\n\tPlease enter your numbers for your array => ");
    for(int i=0; i < no; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // now we will create a dynamic malloc for a copy of our array
    arrcopy = (int*)malloc(sizeof(int) * no);

    // now we will again run a loop to add the values of our array into the copy array
    for(int j=0; j < no; j++)
    {
        arrcopy[j] = arr1[j];
    }

    // now we print all the values in the array copy to see if they are the same
    printf("\n\tA copy of your Array is generated and looks like => \n");

    for(int k = 0; k < no; k++)
    {
        printf(" %d ", arrcopy[k]);
    }
    printf("\n");
}