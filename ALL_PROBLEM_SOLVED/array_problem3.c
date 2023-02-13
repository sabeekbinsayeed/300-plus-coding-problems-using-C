/*
Write a C code which takes an array of size N as input and do the following:
Make reverse of that array and print the differences between every value of the original and reversed array.

For example:
Input:
5
1 4 6 2 7
Output:
6 2 0 2 6


*/

#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int i;
    int ar[size];
    int arr[size];
    int new_arr[size];
    int temp_size=size-1;

    for (i=0; i<size; i++)
    {
        scanf("%d",& ar[i]);
         arr[temp_size]=ar[i];
         temp_size--;
    }

    for (i=0;i<size;i++)
    {

        new_arr[i]=abs(ar[i]-arr[i]);
    }
    for (i=0;i<size;i++)
    {
       printf("%d ",new_arr[i]);
    }






    return 0;
}


