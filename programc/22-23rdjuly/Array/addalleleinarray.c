#include <stdio.h>
#define size 5
int add(int *a)
{
    int sm = 0;
    for(int i = 0; i < size; i++ )
    {
        sm= sm + a[i];
    }
    return sm;
}
void main()
{
    int arr[size], sum;
    printf("\n\tPlease enter %d digits in your array => ");
    for(int i=0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = add(arr);
    printf("\n\tAddition of all numbers is := %d", sum);    
}