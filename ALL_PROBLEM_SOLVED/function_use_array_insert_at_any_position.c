#include <stdio.h>

void insert_position(int ar[],int position,int size,int value){
int i;

    for (i=size;i>position;i--)
    {
        ar[i]=ar[i-1];


    }

    ar[position]=value;
}
int main()
{


    int ar[]={1,2,3,4,5};
    int i;
    int size=5;
    int value=100;
    int position=5;
    for (i=0;i<size;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\nafter insert\n");


    insert_position(ar,position,size,value);

    for (i=0;i<=size;i++)
    {
        printf("%d ",ar[i]);
    }

}

