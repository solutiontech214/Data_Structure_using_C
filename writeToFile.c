#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *f;
    f=fopen("file.txt","w");
    fprintf(f,"this content is written to the file");
    fclose(f);
    getch();
}