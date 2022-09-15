#include <stdio.h>
void selection_sort(int ar[],int size)
{
int i,j,temp;
for (i=0;i<(size-1);i++)
{
    for (j=i+1;j<size;j++)
    {
        if (ar[j]<ar[i])
        {
            temp=ar[j];
            ar[j]=ar[i];
            ar[i]=temp;

        }
    }
}
}
int main()
{
    int k=0;
    int t;
    scanf("%d",&t);
    while (k<t)
    {

        int ar[3];
    int i;

    for (i=0;i<3;i++)
    {
        scanf("%d",&ar[i]);
    }
    selection_sort(ar,3);
   printf("Case %d : ",k+1);
    for (i=0;i<3;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");



        k++;
    }



    return 0;
}
