// to read single character from File
#include <stdio.h>
void main()
{
    FILE *fp; //we will create a file pointer to store the address of our file
    char ch;
    fp = fopen("test.c", "r"); //this will open the "test.c" file in read mode
    ch = fgetc(fp); //reading single character from file and storing into "ch"
    printf("%c", ch); //displaying that character on UserScreen OR O/P screen
    fclose(fp);
}