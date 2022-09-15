//Write a function named get_sum() which will take an array of integers as a parameter and return the sum of all elements of that array.
int getSum(int ar[],int size)
{
    int i,sum=0;
    for (i=0;i<size;i++)
    {
        sum=sum+ar[i];
    }




    return sum ;
}
#include <stdio.h>
int main()
{

    int ar[]={1,2,3,4,5};
    int size=5;
    int sum=getSum(ar,size);
    printf("%d",sum);



}
