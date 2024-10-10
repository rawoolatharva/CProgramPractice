#include <stdio.h>
struct Emp getData(struct Emp );
struct Emp showData(struct Emp );

struct Emp
{
    int id;
    char name[20], loc[20]; 
};
struct Emp getData(struct Emp p)
{
    printf("\n\tEnter emp id => ");
    scanf("%d", &p.id);
    printf("\n\tEnter emp name => ");
    scanf("%s", p.name);
    printf("\n\tEnter emp loc => ");
    scanf("%s", p.loc);
    return p;
}
struct Emp showData(struct Emp p)
{
    printf("\n\tEmp Details: %d \t %s \t %s", p.id, p.name, p.loc);
}
void main()
{
    struct Emp e1, e2, e3;
    e1= getData(e1);
    e2= getData(e2);
    e3= getData(e3);
    // now we display emp details
    showData(e1);
    showData(e2);
    showData(e3);
}