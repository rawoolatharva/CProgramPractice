#include <stdio.h>
int add(int i)
{
    if(i> 10)
    {
        return i;
    }
    else
    {
        printf("%5d",i);
        add(i+1);
    }
}
void main()
{
    int i = 1;
    add(i);
}