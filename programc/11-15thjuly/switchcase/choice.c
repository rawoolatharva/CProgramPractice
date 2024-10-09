#include <stdio.h>
void main()
{
    int choice;
    printf("\n\tenter numb in range 1 to 3 := ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("\n\tCase 1 selected");
            break;
        case 2:
            printf("\n\t Case 2 selected");
            break;
        case 3:
            printf("\n\tCase 3 is selected");
            break;
        default:
            printf("\n\tOut of Range");         
            break;             
    }
}