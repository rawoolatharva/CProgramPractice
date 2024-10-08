#include <stdio.h>
int addDigits(int , int);
void main()
{
    int no, count = 0;
    printf("\n\tPlease enter a number than single digit number here => ");
    scanf("%d", &no);
    count = addDigits(no, count);
    printf("\n\tYour number has %d digits", count);
}
int addDigits(int n, int cnt)
{
    int rem = 0;
    while(n != 0)
    {
        n = n / 10;
        cnt++;
    }
    return cnt;
}    