// intro array program with hard coded values
#include <stdio.h>
void main()
{
    int arr[3] = {11, 26, 58};
    printf("\n\tThe elements in your array are:  ");
    for(int i = 0; i < 3; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n\tThe address of elements in your array are:  ");
    for(int i = 0; i < 3; i++)
    {
        printf(" %p ", &arr[i]);
    }
}