
#include <stdio.h>
int main()
{

    int f=0;
    int times;
    scanf("%d",&times);
    while(f<times)
    {

         int i;
          int size;
    scanf("%d",&size);

    int ar[size];
    for (i=0;i<size;i++)
    {

        scanf("%d",&ar[i]);
    }

    int b[size];
    int k=0,j=size-1;

    for (i=0;i<(size/2)+1;i++)
    {

        b[k]=ar[i];
        k++;
        b[k]=ar[j];
        k++;

        j--;

    }

    for (i=0;i<size;i++)
    {

        printf("%d ",b[i]);
    }

    printf("\n");


        f++;
    }


    return 0;
}
