#include <stdio.h>
#include <stdlib.h>
void main()
{
    int row, col;
    // take rows and cols for array 1
    printf("\n\tHow many rows for Array 1 => ");
    scanf("%d", &row);
    printf("\n\tHow many cols for Array 1 => ");
    scanf("%d", &col);

    //Array 1 we will create a dynamic memory location and store its address in the pointer to pointer array
    int **arr1 = (int**)malloc(sizeof(int)*row);
    for(int i =0; i < row; i++)
    {
        arr1[i] = (int*)malloc(sizeof(int)*col);
    }

    //Array 1 now we will input elem in our array
    printf("\n\tEnter %d X %d Matrix => ", row, col);
    for(int i =0; i < row; i ++)
    {
        for(int j=0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    // take rows and cols for array 2
    printf("\n\tHow many rows for Array 2 => ");
    scanf("%d", &row);
    printf("\n\tHow many cols for Array 2 => ");
    scanf("%d", &col);

    //Array 2 we will create a dynamic memory location and store its address in the pointer to pointer array
    int **arr2 = (int**)malloc(sizeof(int)*row);
    for(int i =0; i < row; i++)
    {
        arr2[i] = (int*)malloc(sizeof(int)*col);
    }

    //Array 2 now we will input elem in our array
    printf("\n\tEnter %d X %d Matrix => ", row, col);
    for(int i =0; i < row; i ++)
    {
        for(int j=0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // take rows and cols for array 3
    printf("\n\tHow many rows for Array 3 => ");
    scanf("%d", &row);
    printf("\n\tHow many cols for Array 3 => ");
    scanf("%d", &col);

    //Array 3 we will create a dynamic memory location and store its address in the pointer to pointer array
    int **arr3 = (int**)malloc(sizeof(int)*row);
    for(int i =0; i < row; i++)
    {
        arr3[i] = (int*)malloc(sizeof(int)*col);
    }
    

}