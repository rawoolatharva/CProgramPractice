#include <stdio.h>
#define size 5
void main()
{
    int arr[size];
    printf("\n\tenter %d digits => ", size);
    for(int i=0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // lets print those array elements
    for(int j=0; j < size; j++)
    {
        printf(" %d ", arr[j]);
    }
}