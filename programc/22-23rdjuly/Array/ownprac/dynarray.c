#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr, size;
    printf("how many numbers you want in your array => ");
    scanf("%d", &size);
    // now lets create memory location for the arr
    arr = (int*)malloc(sizeof(int)*size);
    // lets get values in that array
    printf("print your numbers herr => ");
    for(int i=0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // now lets print our values
    for(int j=0; j < size; j++)
    {
        printf(" %d ", arr[j]);
    }
}