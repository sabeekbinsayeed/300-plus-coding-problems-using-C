#include <stdio.h>
int main()
{

int ar[10]={1,3,3,2,4,5,1,2,5,6};
int unique[10];
int  i,j,k=0,number,flag;
for (i=0;i<10;i++)
{
    flag=1;

    number=ar[i];
    for (j=0;j<k;j++)
    {
        if (unique[j]==number)
        {
            flag=0;
        }
    }
    if (flag==1)
    {
        unique[k]=number;
        k++;
    }
}

for (i=0;i<k;i++)
{
    printf("%d ",unique[i]);
}

    return 0;
}
