//https://vjudge.net/problem/CodeForces-427A


#include <stdio.h>

int main()
{
int n;
int sum=0;
int count=0;
int num;
scanf("%d",&n);
int i=1;
while (i<=n)
{

scanf("%d",&num);

if (num>0)
{
    sum=sum+num;

}
else {s

        if (sum>0)
        {
            sum=sum-1;
        }
        else
        {
            count=count+1;
        }

}



i++;
}
printf("%d",count);

    return 0;
}
