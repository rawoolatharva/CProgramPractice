// keep accepting number from user until its a positive integer
#include <stdio.h>
void main()
{
  int no;
  do
  {
    printf("Type a number and we will check if it is positive => ");
    scanf("%d", &no);
  }
  while( no <= 0);
  printf("\n\tYour positive Integer is %d\n", no);
}