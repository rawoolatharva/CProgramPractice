// now we will try to read the whole file
#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("test.c", "r");
    while(( ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}
