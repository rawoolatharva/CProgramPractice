#include <stdio.h>
struct Sports
{
    int prno;
    char name[12];
};
void main()
{
    struct Sports spr[5];
    printf("\n\tEnter your priority number for your sport => ");
    scanf("%d", &spr[0].prno);
    printf("\n\tEnter the name for your sport => ");
    scanf("%s", spr[0].name);
    printf("\n\tEnter your priority number for your sport => ");
    scanf("%d", &spr[1].prno);
    printf("\n\tEnter the name for your sport => ");
    scanf("%s", spr[1].name);
    printf("\n\tEnter your priority number for your sport => ");
    scanf("%d", &spr[2].prno);
    printf("\n\tEnter the name for your sport => ");
    scanf("%s", spr[2].name);
    printf("\n\tEnter your priority number for your sport => ");
    scanf("%d", &spr[3].prno);
    printf("\n\tEnter the name for your sport => ");
    scanf("%s", spr[3].name);
    printf("\n\tEnter your priority number for your sport => ");
    scanf("%d", &spr[4].prno);
    printf("\n\tEnter the name for your sport => ");
    scanf("%s", spr[4].name);
    printf("\n\t%d  %s", spr[0].prno, spr[0].name);
    printf("\n\t%d  %s", spr[1].prno, spr[1].name);
    printf("\n\t%d  %s", spr[2].prno, spr[2].name);
    printf("\n\t%d  %s", spr[3].prno, spr[3].name);
    printf("\n\t%d  %s", spr[4].prno, spr[4].name);
}