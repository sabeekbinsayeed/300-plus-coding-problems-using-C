
#include <stdio.h>
int main()
{



    int n;
    scanf("%d",&n);

    int a,i,row;
    for (row=1;row<=n;row++)
    {
  a=1;
        for (i=1;i<=row;i++)
        {

            printf("%d ",a);
            a=a* (row-i)/i;

        }
        printf("\n");
    }


    return 0;
}
