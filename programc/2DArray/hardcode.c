#include <stdio.h>
void main()
{
    int arr[3][3] = {{22,23,24},{46,48,50},{61,63,65}};
    for(int i =0; i <3; i++)
    {
        for(int j = 0; j <3; j++)
        {
            // we used %p as format specifier for address coz in this ide the address is in hexadecimal format
            printf("\n\t%d\t%p", arr[i][j], &arr[i][j]);
        }
    }
}