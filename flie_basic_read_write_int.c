
#include <stdio.h>
int main()
{
FILE *inputFile;
inputFile=fopen("input1.txt","r");
if (inputFile==NULL)
{
    printf("not file found");
    return 0;
}
FILE *outputFile;
outputFile=fopen("output1.txt","w");
int n;
fscanf(inputFile,"%d",&n);
int i;
int a;
int sum=0;
for (i=0;i<n;i++)
{
    fscanf(inputFile,"%d",&a);
    sum=sum+a;
}

fprintf(outputFile,"%d ",sum);

    return 0;
}
