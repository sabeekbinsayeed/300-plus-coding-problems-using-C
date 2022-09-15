//https://codeworld19.blogspot.com/2020/05/array-reversal-in-c-hacker-rank-solution.html
#include <stdio.h>
int main()
{

int n;
scanf("%d",&n);
int i;
int arr[n],arr_rev[n];
int temp=n-1;
for (i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
    arr_rev[temp]=arr[i];
    temp--;
}
for (i=0;i<n;i++)
{
    arr[i]=arr_rev[i];

}

for (i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}
