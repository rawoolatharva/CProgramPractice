#include <stdio.h>
#include <stdlib.h>
struct Emp
{
    int id;
    char name[12], loc[20];
};
void main()
{
    struct Emp *arr;
    int no;
    printf("\n\tHow many employees are there => ");
    scanf("%d", &no);
    // we will create a dynamic location for our struct aray
    arr = (struct Emp*)malloc(sizeof(struct Emp)*no);
    printf("\n\tEnter employee details...");
    for(int i = 0; i < no; i++)
    {
        printf("\n\tEnter your employye name => ");
        scanf("%d", &arr[i].id);
        printf("\n\tEnter the name => ");
        scanf("%s", arr[i].name);
        printf("\n\tEnter the loc => ");
        scanf("%s", arr[i].loc);
    }
    printf("\n\tYour employee details...");
    for(int j = 0; j < no; j++)
    {
        printf("\n\t%d \t %s \t %s", arr[j].id, arr[j].name, arr[j].loc);
    }
}