
#include <stdio.h>
int main()
{
FILE *inputFile;
inputFile=fopen("input4.txt","r");
FILE *outputFile;
outputFile=fopen("output11.txt","a");
if (inputFile==NULL)
{
    fprintf(outputFile,"not file found");
    return 0;
}



    return 0;
}

