//Write a C program to create a file and write contents, save and close the file.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char data[1000];
    FILE * fPtr;
    fPtr = fopen("file1.txt", "w");
    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter contents to store in file : \n");
    fgets(data, 1000, stdin);
    fputs(data, fPtr);
    fclose(fPtr);
    printf("File created and saved successfully. :) \n");
    return 0;
}
