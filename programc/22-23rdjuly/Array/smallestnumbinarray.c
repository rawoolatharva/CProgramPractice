// smallest number in the array
#include <stdio.h>
void main()
{
    int temp, arr[5];
    printf("\n\tPlease enter your 5 numbers in the array => ");
    for(int i =0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    // now lets check the smallest number
    temp = arr[0];
    for(int j = 0; j < 4; j++)
    {
        if(temp > arr[j+1])
        {
           temp = arr[j+1];
        }
    }
    printf("\n\tThe smallest number in your array is %d\n", temp);
}