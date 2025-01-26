// Created Date: 26-01-25
// Created By Onkar Gutti
//This program is used to create a file in C language.
//The file is created in write mode.
//If the file is created successfully then it will print "File created successfully".
//If the file is not created then it will print "File not created".
//The file is created in the same directory where the program is saved.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    FILE *f;
    f=fopen("file.txt","w");
    if(f==NULL)
    {
        printf("File not created");
    }
    else
    {
        printf("File created successfully");
    }
    fclose(f);
    getch();

}