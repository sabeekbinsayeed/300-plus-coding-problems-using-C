#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mul=1;
    int i;
    for (i=0;i<6;i++)
    {
        mul=mul*5;

    }
    int res=mul%100;
    printf("%d\n",res);
}
