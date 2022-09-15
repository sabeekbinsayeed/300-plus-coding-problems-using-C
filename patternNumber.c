
#include <stdio.h>
int main()
{
int i,j,m;
for(i=1;i<10;i++)
{

    m=i;

    for (j=1;j<=m;j++)
    {
        printf("%d ",i);
        i++;
    }
    i=m;
    printf("\n");
}
    return 0;
}


