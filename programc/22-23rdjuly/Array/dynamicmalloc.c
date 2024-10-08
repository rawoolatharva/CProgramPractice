// we will be doing dynamic memory allocation in array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    // we declared an pointer of int to store a memory address
    int *arr, no;
    printf("\n\thow many numbers do you want in your array? :- ");
    scanf("%d", &no);

    // we will then dynamically allocate the memory location of int type as per the number of elements provided by the user
    arr = (int*)malloc(sizeof(int) * no);

    printf("Enter %d numbers here => ", no);
    for(int i = 0; i < no; i++ )
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\tYour numbers are => ");
    for(int i=0; i < no; i++)
    {
        printf(" %d ", arr[i]);
    }
}