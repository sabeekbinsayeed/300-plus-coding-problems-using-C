/*
Write a C code which takes an array of size N as input and do the following:
Print the values of even indexes. Index of that array starts from 1.

For example:
Input:
5
5 12 3 4 9
Output:
12 4


*/

#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int i;
    int arr[size];

    for (i=0; i<size; i++)
    {
        scanf("%d",& arr[i]);
    }

    for (i=0; i<size; i++)
    {
        if (i%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }



    return 0;
}

