// now we will try to read the whole file
#include <stdio.h>
void main()
{
    FILE *fp;
    char ch, fname[30];
    printf("\n\tEnter file name to open : ");
    scanf("%s", fname);
    fp = fopen(fnamej, "r");
    while(( ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}
