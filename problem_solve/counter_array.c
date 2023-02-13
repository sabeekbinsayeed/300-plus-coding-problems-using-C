#include <stdio.h>
int main()
{

    int size;
    scanf("%d",&size);
    int arr[size];
    printf("enter values from 0 to 10 \n");
    int counter[11]={0}
    ;
    int i=0;
    int val;

    while (i<size)
    {

        scanf("%d",&arr[i]);
        i++;

    }
    i=0;
 while (i<size)
    {

        val=arr[i];
        counter[val]=counter[val]+1;
        i++;

    }

    for (i=0;i<11;i++)
    {
       if (counter[i]>0)
       {
            printf("value %d has occured %d times \n",i, counter[i]);
       }
    }





    return 0;
}
