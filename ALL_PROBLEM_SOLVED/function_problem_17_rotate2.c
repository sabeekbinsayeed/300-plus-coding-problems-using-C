//Write a function which will right rotate an array by k. For example, array a has the values {1, 2, 3, 4, 5}. If we call Rotate(a). Array a will have the values {2, 3, 4, 5, 1}.
#include <stdio.h>
void Rotate_one(int ar[])
{

    int temp=ar[0];
    int size=5;
    int i;
    for (i=0;i<(size-1);i++)
    {
        ar[i]=ar[i+1];
    }
    ar[i]=temp;
}
void RotateByK(int ar[],int times)
{
int i=0;
while (i<times)
{
    Rotate_one(ar);
    i++;
}
}
int main()
{

    int ar[5]={1,2,3,4,5};
    RotateByK(ar,3);
    int i;
    for (i=0;i<5;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}

