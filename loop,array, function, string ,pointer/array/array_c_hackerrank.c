//https://codeworld19.blogspot.com/2020/03/1d-arrays-in-c.html
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    int sum=0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);


    return 0;
}
