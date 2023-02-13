#include <stdio.h>
int main()
{

    int i;
    int n=3;
    int ar[n];
    int new_ar[n];;

    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

     for (i=0;i<n;i++)
    {
       new_ar[i]=ar[i];
    }
    printf("our old array: \n");
     for (i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }

printf("our new array: \n");
     for (i=0;i<n;i++)
    {
        printf("%d\n",new_ar[i]);
    }


    return 0;

}
