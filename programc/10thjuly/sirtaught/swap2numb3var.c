   // pgm to swap two numbers
   #include <stdio.h>
   void main()
   {
    int fno, sno, tno;
    printf("\n\tPlease enter your first number => ");
    scanf("%d", &fno);
    printf("\n\tPlease enter your second number => ");
    scanf("%d", &sno);
    // priting before swapping
    printf("\n\tyour first number before swap=> %d", fno);
    printf("\n\tyour second number before swap => %d", sno);
    //first way of swpping using a third var
    tno = fno;
    fno = sno;
    sno = tno;
    printf("\n\tyour first number after swap=> %d", fno);
    printf("\n\tyour second number after swap => %d", sno);
   }
    