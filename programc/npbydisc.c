// find the net price of tshirt at different discounts
#include <stdio.h>
void main()
{
    int op,dis,disAM;
    printf("\n\tPlease enter the original price of your T-shirt => ");
    scanf("%d", &op);
    if(op>=1000)
        dis = 25;
    else if(op>=800)
        dis = 20;
    else if(op>=500)
        dis = 15;
    else
        printf("\n\tWe do not have a discount for you. Thank You");
    printf("\n\tYour original price is %d", op);
    printf("\n\tYour discount will be %d percent", dis);
    disAM = op * dis/100;
    printf("\n\tYour discounted amount will be %d", disAM);
    printf("\n\tYour Net Price after discount will be %d", op-disAM);
}