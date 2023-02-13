#include <stdio.h>
int main()
{

    int val;
    scanf("%d",&val);
    int i;
    for (i=1;i<10;i++)
    {
        printf("%d * %d = %d\n",i,val,i*val);
    }



    return 0;
}
