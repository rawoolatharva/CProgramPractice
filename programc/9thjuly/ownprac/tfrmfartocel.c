// temperature from farenhiet to celsius
#include <stdio.h>
void main()
{
    float far,cel;
    printf("\n\tPlease enter your temp in farenhiet => ");
    scanf("%f", &far);
    cel = (far - 32) * 5/9 ;
    printf("\n\tYour temp in degree celcius will be => %0.2f", cel);
}