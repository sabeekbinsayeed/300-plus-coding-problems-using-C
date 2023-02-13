
/*
Write a C program to read elements in an array and find the maximum of array elements. Also find how many times the maximum occurs.
Example Input
Input elements: 10 20 50 40 50 30 40
Output
Maximum is 50
Maximum occurs 2 times



*/

#include <stdio.h>
int main()
{
    int ar[7],counter[100]={0};
    int i,val;

    for (i=0;i<7;i++)
    {
        scanf("%d",&ar[i]);

    }

      int max=ar[0];

 for (i=0;i<7;i++)
    {

        if (ar[i]>= max)
        {
            max=ar[i];
            val=ar[i];
            counter[val]=counter[val]+1;

        }


    }

    printf("Maximum is %d\n",max);
    printf("Maximum occurs %d",counter[max]);




    return 0;
}



