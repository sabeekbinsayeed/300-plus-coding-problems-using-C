/*

Write a C program to take an integer array of size N as input and calculate the sum of all integers. You need to do this using files. That means, you will take input from a file, and give output into a file without using command prompt / terminal.

*/


#include <stdio.h>
int main()
{
FILE *inputFile;
inputFile=fopen("input_practice1.txt","r");
if (inputFile==NULL)
{
    printf("no file found\n");
    return 0;
}

FILE *outputFile;
outputFile=fopen("output_practice1.txt","w");
int n;
fscanf(inputFile,f"%d",&n);
int i;
int sum=0;
int a;
for (i=0;i<n;i++)
{
fscanf(inputFile,"%d",&a);
   sum=sum+a;

}
fprintf(outputFile,"%d",sum);
    return 0;
}
