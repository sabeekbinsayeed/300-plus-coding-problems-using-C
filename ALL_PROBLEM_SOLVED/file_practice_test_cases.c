/*

Do the above problem but this time with test cases. You need to take a test case as input and run the program until the test case ends. Also you need to store all the outputs into a file in such a way that the file contains all sums of those test cases.

For example:
Input:
3
5
1 2 3 4 5
4
2 5 1 4
6
5 8 1 7 50 2

Output: The file contains
Case 1: 15
Case 2: 12
Case 3: 73

*/


#include <stdio.h>
int main()
{
FILE *inputFile;
inputFile=fopen("input_practice2.txt","r");
if (inputFile==NULL)
{
    printf("no file found\n");
    return 0;
}

FILE *outputFile;
outputFile=fopen("output_practice2.txt","a");
int cases;
fscanf(inputFile,"%d",&cases);
int j=0;
while (j<cases)
{
int n;
fscanf(inputFile,"%d",&n);
int i;
int sum=0;
int a;
for (i=0;i<n;i++)
{
fscanf(inputFile,"%d",&a);
   sum=sum+a;

}
fprintf(outputFile,"Case %d: %d\n",j+1,sum);
j++;
}

    return 0;
}
