#include <stdio.h>
enum Subjects
{
    english,maths,history,bio=11,chem,geo,marathi
};
void main()
{
    printf("\n\tThe value of history is => %d",history);
    printf("\n\tThe value of chem is => %d",chem);
    printf("\n\tThe value of maths is => %d",maths);
}
