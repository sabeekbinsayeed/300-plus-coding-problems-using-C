
/*
Write a function named reverse_array() which will take an array, size of that array and reverse that array. You don’t need to return anything because if you reverse that array, the changes will be applied to the original array also.

*/
#include <stdio.h>
void reverse_array(int ar[],int size)
{
int arr[size];
int i,j=size-1;
int temp;
for (i=0;i<size/2;i++)
{
temp=ar[size-1];
ar[size-1]=ar[i];
ar[i]=temp;
size--;
// ekhane condition i< j where j=size die eshuru hobe, eivabeo korte paroo
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




