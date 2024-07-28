#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr1[6], arr2[6], *sumArr;
    printf("\n\tPlease enter your numbers for array 1 => ");
    for(int i=0; i < 6; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\n\tPlease enter your numbers for array 2 => ");
    for(int j=0; j < 6; j++)
    {
        scanf("%d", &arr2[j]);
    }
    sumArr = (int*)malloc(sizeof(int)*6);
    // now we will add each element of both array and store in our dynamic array
     for(int i = 0; i < 6; i++)
    {
      sumArr[i] = arr1[i] + arr2[i];
    }
    // now we will print our summation array
    printf("\n\tThe addition of your two arrays will be => ");
    for(int i = 0; i < 6; i++)
    {
      printf(" %d ", sumArr[i]);
    }  
}