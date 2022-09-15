/*
How do you find the duplicate number on a given integer array?

*/
#include <stdio.h>

int main()
{
    int ar[5];
    int duplicate[5]={0};
    int duplicate_found;
    int k=0,i,value,j;
    for (i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i=1;i<5;i++)
    {
        duplicate_found=0;
        value=ar[i];

        for (j=i-1;j>=0;j--)
        {
            if (value==ar[j])
            {
                duplicate_found=1;
                break;
            }

        }
        if (duplicate_found==1)
        {

            duplicate[k]=value;
            k++;
        }

    }
printf("duplicate\n")
    for (i=0;i<k;i++)
        printf("%d ",duplicate[i]);



    return 0;
}
