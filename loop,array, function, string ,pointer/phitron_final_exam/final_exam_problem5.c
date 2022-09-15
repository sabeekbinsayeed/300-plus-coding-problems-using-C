/*

https://codeforces.com/problemset/problem/1360/B
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

void small_value(int ar[],int size)
{

    int i;
    int min=ar[1]-ar[0];
    int val;
    for (i=1;i<size-1;i++)
    {
        val=ar[i+1]-ar[i];
        if (val<min)
        {
            min=val;
        }

    }

    printf("%d\n",min);
}
int main()
{
    int times;
    scanf("%d",&times);

    int m=0;

    while (m<times)
    {
int size;
scanf("%d",&size);



int ar[size];
int i;
for (i=0;i<size;i++)
{
    scanf("%d",&ar[i]);
}

selection_sort(ar,size);

small_value(ar,size);



        m++;
    }









    return 0;
}







