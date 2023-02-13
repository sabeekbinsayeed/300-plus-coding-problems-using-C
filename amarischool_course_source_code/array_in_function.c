#include <stdio.h>

void add_array(int arr[],int size)
{
int i;
int sum=0;
for(i=0;i<size;i++)
{
    sum=sum+arr[i];
}

printf("sum is %d",sum);
}
int main()
{

    int n;
    scanf("%d",&n);
    int i;
int ar[n];
for (i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
}

add_array(ar,n);


    return 0;
}
