#include <stdio.h>
struct Sports
{
    int prno;
    char spName[12];
};
struct Sports getData(struct Sports *); //func declaration
struct Sports showData(struct Sports *);
void main()
{
    struct Sports sp1, sp2, sp3;
    getData(&sp1); //func call
    getData(&sp2);
    getData(&sp3);
    showData(&sp1);
    showData(&sp2);
    showData(&sp3);
}
struct Sports getData(struct Sports *s) //func definition
{
    printf("\n\tEnter your priority number for your sport => ");
    scanf("%d", &s->prno);
    printf("\n\tEnter the name for your sport => ");
    scanf("%s", s->spName);
}
struct Sports showData(struct Sports *s)
{
    printf("\n\t%d  %s", s->prno, s->spName);
}
