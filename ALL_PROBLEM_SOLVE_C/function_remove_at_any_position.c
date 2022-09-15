#include <stdio.h>

void remove_position(int ar[],int position,int size){
int i;

    for (i=position;i<size-1;i++)
    {
        ar[i]=ar[i+1];


    }


}
int main()
{


    int ar[]={1,2,3,4,5};
    int i;
    int size=5;

    int position=2;
    for (i=0;i<size;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\nafter insert\n");


    remove_position(ar,position,size);

    for (i=0;i<size-1;i++)
    {
        printf("%d ",ar[i]);
    }

}

