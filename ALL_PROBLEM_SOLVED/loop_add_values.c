1+2+3 +........+n
#include <stdio.h>
int main()
{
int i;
int sum=0;
int n;
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    sum=sum+i;
}

printf("sum is %d",sum);

    return 0;
}
/*
i=1 sum=sum+i= 0+1 => sum=1
i=2 sum=sum+i  1+2  => sum=3
i=3 sum=sum+i  3+3 =>sum=6
i=4 sum=sum+i  6 +4 =>sum=10
i=5 sum=sum+i  1-+5  => sum=15
*/
