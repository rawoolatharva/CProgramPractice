#include <stdio.h>
struct Subj
{
    int subCode, credits;
    char name[15];
};
void main()
{
    struct Subj eng = {02,20,"English"}, phy = {05,25,"Physics"}, mths;
    printf("\n\t%d\t%d\t%s",eng.subCode,eng.credits,eng.name);
    printf("\n\t%d\t%d\t%s",phy.subCode,phy.credits,phy.name);   
    printf("\n\tEnter subject code for mths => ");
    scanf("%d", &mths.subCode);
    printf("\n\tEnter credits for mths => ");
    scanf("%d", &mths.credits);
    printf("\n\tEnter name for mths => ");
    scanf("%s", mths.name);
    printf("\n\t%d\t%d\t%s", mths.subCode, mths.credits, mths.name);
}