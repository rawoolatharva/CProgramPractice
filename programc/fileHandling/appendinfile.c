// append in a file
#include <stdio.h>
void main()
{
    FILE *fp; 
    fp = fopen("demo.c", "a"); //this will open the "test.c" file in write mode
    fputc('C', fp); // appending in the file
    printf("File is SAVED"); //displaying that character on UserScreen OR O/P screen
    fclose(fp);
}