#include <stdio.h>
struct Sports
{
    int prno;
    char name[12];
};
void main()
{
    struct Sports spr[5];
    for(int i = 0; i < 5; i++)
    {
        printf("\n\tEnter your priority number for your sport => ");
        scanf("%d", &spr[i].prno);
        printf("\n\tEnter the name for your sport => ");
        scanf("%s", spr[i].name);
    }
    
    for(int j = 0; j < 5; j++)
    {
        printf("\n\t%d  %s", spr[j].prno, spr[j].name);
    }
}