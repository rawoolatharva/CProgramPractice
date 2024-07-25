// intro array program with hard coded values
#include <stdio.h>
#define size 3
void main()
{
    int arr[size];
    printf("Please enter %d integers in your array: ", size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\tThe elements in your array are: ");
    for(int j = 0; j < size; j++)
    {
        printf(" %d ", arr[j]);
    }
    printf("\n");
}