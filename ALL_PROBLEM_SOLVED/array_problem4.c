/*
Write a C program to read elements in an array and find the sum of array elements.
Example Input
Input elements: 10, 20, 30, 40, 50
Output
Sum of all elements = 150


*/

#include <stdio.h>
int main()
{
    int ar[5];
    int i,sum=0;

    for (i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }

    printf("Sum of all elements = %d",ar[i]);




    return 0;
}



