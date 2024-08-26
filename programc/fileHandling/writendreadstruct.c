// How to Write and Read Structure to and from File
#include <stdio.h>
struct Emp
{
    int eno;
    char name[10], address[20];
};
void main()
{
    struct Emp e1;
    FILE *fp;
    int ch;
    while(1)
    {
        printf("\n\t1.Insert Record\n\t2.Show Record\n\t3.Exit\n\t");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("\n\tEnter eno : ");
                scanf("%d", &e1.eno);
                printf("\n\tEnter name : ");
                scanf("%s", e1.name);
                printf("\n\tEnter address : ");
                scanf("%s", e1.address);
                fp = fopen("sample.txt", "a");
                fwrite((char*)&e1, sizeof(e1), 1, fp);
                fclose(fp);
                break;
        }
    }    
}