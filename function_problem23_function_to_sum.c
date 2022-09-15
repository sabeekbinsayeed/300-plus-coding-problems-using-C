//Write a function that outputs the element wise sum of two equal sized array. It should have the signature void add(int a[], int b[], int sum[]). Use the sum variable for outputting the sum.
//Example: a = {1, 2, 3}, b = {2, 3, 4}. Then sum should be {3, 5, 7}
#include <stdio.h>
void add(int a[],int b[],int sum[])
{
    int i;
    for (i=0;i<3;i++)
    {
        sum[i]=a[i]+b[i];
    }

}

int main()
{

    int a[]={1,2,3};
    int b[]={4,5,6};
    int sum[]={};
    add(a,b,sum);
int i=0;
for (i=0;i<3;i++)
{
    printf("%d ",sum[i]);
}

    return 0;
}
