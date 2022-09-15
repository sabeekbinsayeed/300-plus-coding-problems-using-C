/*
https://codeforces.com/problemset/problem/34/B
*/






#include <stdio.h>

void selection_sort(int ar[],int size)
{
    int i,j;
     int temp;
    for (i=0;i<size-1;i++)
    {
        for (j=i+1;j<size;j++)
        {
            if (ar[i]>ar[j])
            {
              temp =ar[i];
                ar[i]=ar[j];
                ar[j]=temp;

            }

        }
    }


}

void take_sum(int ar[],int many)
{
int i,sum=0;
for (i=0;i<many;i++)
{
    if (ar[i]<0)
    {
        sum=sum+ar[i];

    }

}
if (sum<0)
    {
        sum=-sum;


        };
printf("%d\n",sum);
}
int main()
{
int size;
scanf("%d",&size);

int many;
scanf("%d",&many);

int ar[size];
int i;
for (i=0;i<size;i++)
{
    scanf("%d",&ar[i]);
}

selection_sort(ar,size);






take_sum(ar,many);

    return 0;
}
