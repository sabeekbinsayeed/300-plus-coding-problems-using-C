/*
How do you find the missing number in a given integer array of 1 to 10?


*/

#include <stdio.h>

int main()
{
 int ar[10];
 int missing [10];
 int exist=0;

 int i,j,k=0;
 for (i=0;i<10;i++)
{
    scanf("%d",&ar[i]);
}
for (i=1;i<=10;i++)
{
    exist=0;

    for (j=0;j<10;j++)
    {
        if (i==ar[j])
        {

            exist=1;
            break;

        }
    }
    if(exist==0)
    {

        missing[k]=i;
        k++;

    }


}
printf("missing numbers are : \n");
for (i=0;i<k;i++)
    {
        printf("%d ",missing[i]);
    }



    return 0;
}
