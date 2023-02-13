#include <stdio.h>
int main()
{

int ar[3][3];
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int sum=0;
int i,j;
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        scanf("%d",&ar[i][j]);
    }
}

for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        sum=sum+ar[i][j]+arr[i][j];
    }
}

printf("%d",sum);
    return 0;
}
