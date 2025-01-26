// Crated by Onkar gutti on 26/1/2025
// This code is used to write to a file in C language.
// The file is opened in write mode.
// The content is written to the file using fprintf() function.
// The content is written to the file.txt file.
// The content written to the file is "this content is written to the file".
// The content is written to the file.
// The file is closed using fclose() function.
// The file is written to the same directory where the program is saved.
// The file is written to the file.txt file.

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