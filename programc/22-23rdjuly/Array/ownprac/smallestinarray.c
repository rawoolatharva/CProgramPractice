#include <stdio.h>
#define size 5
void main()
{
    int arr[size], temp;
    printf("\n\tenter %d digits => ", size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    temp = arr[0];
    for(int i=0; i < size; i++)
    {
        if(temp > arr[i+1])
        {
            temp = arr[i+1];
        }  
    }
    printf("the smallest in the array is := %d", temp);
}