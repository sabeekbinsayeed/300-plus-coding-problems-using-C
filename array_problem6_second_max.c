

/*
Write a C program to find the second largest element in an array.
Example
Input
Input array elements: -7 2 3 8 6 6 75 38 3 2
Output
Second largest = 38




*/

#include <stdio.h>
int main()
{
    int ar[10];
    int i,val;

    for (i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);

    }

      int max=ar[0];

 for (i=1;i<10;i++)
    {

        if (ar[i]>= max)
        {
            max=ar[i];


        }


    }

    int second_max;
    for (i=1;i<10;i++)
    {

        if (ar[i]>=second_max && ar[i]<=max)
        {
            second_max=ar[i];


        }


    }





    printf("Second Largest is %d\n",second_max);





    return 0;
}



