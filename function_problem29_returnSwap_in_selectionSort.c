//Make a function named count_swaps() which will take an array of integers and the size of that array. You need to tell how many swaps you need while implementing the selection sort that is shown in the module video and return that number of swaps from that function.


#include <stdio.h>

int count_swaps(int ar[],int size)
{
    int position, check;
    int temp;
    int swap=0;
    for (position=0;position<(size-1);position++)
    {
        for (check=position+1;check<(size);check++)
        {
            if (ar[check]<ar[position])
            {
                 temp=ar[check];
                ar[check]=ar[position];
                ar[position]=temp;
                swap++;
            }
        }
    }
    return swap;

}
int main()
{


    int ar[]={2,10,1,4,5};
    int size=5;
    int swap=count_swaps (ar,size);
    printf("%d ",swap);
    //int i=0;
    /*
    for (i=0;i<size;i++)
    {
        printf("%d " ,ar[i]);
    }

    */
    return 0;
}
