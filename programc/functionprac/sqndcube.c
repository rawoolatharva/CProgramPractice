// square and cube function with pointer
#include <stdio.h>
int square(int, int *);
int cube(int, int *);
void main()
{
    int n, sq, cb;
    printf("\n\tPlease Enter your Number => ");
    scanf("%d", &n);
    square(n, &sq);
    cube(n, &cb);
    printf("\n\tThe Square of your number will be %d", sq);
    printf("\n\tThe Cube of your number will be %d\n", cb);
}
int square(int n, int *sq)
{
    *sq = n * n;
}
int cube(int n, int *cb)
{
    *cb = n * n * n;
}
