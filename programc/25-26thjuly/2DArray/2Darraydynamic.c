#include <stdio.h>
#include <stdlib.h>
void main()
{
    int row, col;
    printf("\n\tHow many rows => ");
    scanf("%d", &row);
    printf("\n\tHow many cols => ");
    scanf("%d", &col);

    // we will create a dynamic memory location and store its address in the pointer to pointer array
    int **arr = (int**)malloc(sizeof(int)*row);
    for(int i =0; i < row; i++)
    {
        arr[i] = (int*)malloc(sizeof(int)*col);
    }

    // now we will input elem in our array
    printf("\n\tEnter %d X %d Matrix => ", row, col);
    for(int i =0; i < row; i ++)
    {
        for(int j=0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // lets print our array of arrays
    printf("\n\tYour %d X %d Matrix is as  =>  \n", row, col);
    for(int i =0; i < row; i ++)
    {
        for(int j=0; j < col; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
}