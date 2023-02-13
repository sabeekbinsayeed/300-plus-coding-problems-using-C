#include <stdio.h>
int main()
{

    int ar[5]={-1,1,3,-2,-4};
    int i;
    int count_negative=0;
    for (i=0;i<5;i++)
    {
        if (ar[i]<0)
        {
            count_negative++;
        }
    }

    printf("%d ",count_negative);


    return 0;
}
