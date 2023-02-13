#include <stdio.h>
#include <math.h>
int main()
{

int n;
scanf("%d",&n);

int val=sqrt(n);
if (val*val==n)
{
    printf("YES\n");
}
else
{
    printf("No\n");
}
    return 0;
}
