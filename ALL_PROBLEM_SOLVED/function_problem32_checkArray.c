/*
Make a function named change_array() which will take an integer array and size of that array. After that you will reverse that array and put that in a new array and print it in the main() function. You know that you can’t return an array normally, so you need to make that array in the main() function and pass that through the parameter.

*/

#include <stdio.h>

void change_array(int a[],int size, int b[])
{
    int i=0;
    int j=size-1;
    for (i=0;i<size;i++)
    {
        b[j]=a[i];
        j--;
    }
    for (i=0;i<size;i++)
    {
        a[i]=b[i];
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int b[5];
    change_array(a,5,b);

    int i;
    for (i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
