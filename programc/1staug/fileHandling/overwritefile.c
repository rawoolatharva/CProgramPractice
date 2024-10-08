// overwrite in a file
#include <stdio.h>
void main()
{
    FILE *fp; 
    fp = fopen("demo.c", "w"); //this will open the "test.c" file in write mode
    fputc('W', fp); // overwriting the file
    printf("File is SAVED"); //displaying that character on UserScreen OR O/P screen
    fclose(fp);
}