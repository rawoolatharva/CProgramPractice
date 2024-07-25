#include <stdio.h>
#define size 5
int addAll(int *);
void main()
{
    int arr[size], sum;
    printf("\n\tPlease enter %d integer elements for your array => \n", size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // we pass arrayname as arguement, in a way passing base address of the array to the fnction;
    sum = addAll(arr); 
    printf("\n\tAddition of all Numbers in your array will be : %d\n", sum);
}
// here we have a pointer accepting the base address of our array
int addAll(int *a)
{
    int sm=0;
    for(int i = 0; i < size; i++)
    {
        sm = sm + a[i];
    }
    return sm;
}