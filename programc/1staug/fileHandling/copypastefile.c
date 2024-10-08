// Copy and Paste the File
#include <stdio.h>
void main()
{
    FILE *src, *dest;
    char ch;
    src = fopen("test.c", "r");
    dest = fopen("demo.c", "w");
    while((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }
    printf("Your file has been copy pasted");
    fclose(src);
    fclose(dest);
}