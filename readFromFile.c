// Created by: Onkar gutti On 26/1/2025
// This code is used to read from a file in C language.
// The file is opened in read mode.
// The content of the file is read using fgets() function.
// The content of the file is stored in a character array.
// The content of the file is printed on the console.
// The file is closed using fclose() function.
// The file is read from the same directory where the program is saved.
// The file is read from the file.txt file.
// The content of the file is "this content is written to the file".
// The content of the file is read and printed on the console.
#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *f=fopen("file.txt","r");
    char str[50];
    fgets(str,50,f);
    printf("%s",str);
    fclose(f);
    getch();

}