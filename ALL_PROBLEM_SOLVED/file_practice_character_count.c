/*

Write a C program to take input from a file named “input.txt” and calculate how many characters are there in that file

*/


#include <stdio.h>
int main()
{
FILE *inputFile;
inputFile=fopen("input3.txt","r");
if (inputFile==NULL)
{
    printf("no file found\n");
    return 0;
}

FILE *outputFile;
outputFile=fopen("output_practice1.txt","w");

int i=0;
int count=0;
while (1)
{
   char ch= fgetc(inputFile);

    if (ch==EOF)
    {
        break;
    }

    count++;
    i++;
}
printf("%d ",count);
    return 0;
}
