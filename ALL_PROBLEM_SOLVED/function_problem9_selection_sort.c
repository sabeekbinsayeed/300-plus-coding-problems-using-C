#include <stdio.h>

void sort(int ar[],int size)
{

    int i,temp,position,check;
for (position=0;position<(size-1);position++)
{

 for (check=position+1;check< (size);check++)
    {
if (ar[check]<ar[position])
        {
            temp=ar[check];
            ar[check]=ar[position];
            ar[position]=temp;
        }
    }

}

}


int main()
{

    int ar[]={2,3,4,1,12,8};
    int size=6;
sort(ar,size);

    int i=0;
    for (i=0;i<size;i++)
    {

        printf("%d ",ar[i] );
    }

    return 0;
}
