#include <stdio.h>
int main()
{

    int i;
    int n;
    scanf("%d",&n);
    int ar[n];
    int new_ar[n];
    int final_ar[n];

     for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

     for (i=0;i<n;i++)
    {
        scanf("%d",&new_ar[i]);
    }

    for (i=0;i<n;i++)
    {
        final_ar[i]=ar[i]+new_ar[i];
    }

     for (i=0;i<n;i++)
    {
        printf("%d",final_ar[i]);
    }
    /*
    1 2 3
    3 4 5
    4 6 8
*/


    return 0;

}

