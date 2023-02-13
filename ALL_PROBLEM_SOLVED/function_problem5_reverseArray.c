
/*
Write a function named reverse_array() which will take an array, size of that array and reverse that array. You don’t need to return anything because if you reverse that array, the changes will be applied to the original array also.

*/
#include <stdio.h>
void reverse_array(int ar[],int size)
{
int arr[size];
int i,j=size-1;
for (i=0;i<size;i++)
{
arr[i]=ar[j];
j--;
}

for (i=0;i<size;i++)
{
ar[i]=arr[i];
}

}
int main()
{


    int ar[3]={1,2,3};
    reverse_array(ar,3);
    int i=0;
    for (i=0;i<3;i++)
    {
        printf("%d ",ar[i]);
    }


    return 0;
}



