
#include <stdio.h>
int main()
{
int ar[5]={1,2,3,4,5};
//printf("%d %d",ar,&ar[0]);
int i=0;
for (i=0;i<5;i++)
{
    printf("%d ",*(ar+i));
}

    return 0;

}
