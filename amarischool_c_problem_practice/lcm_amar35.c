#include <stdio.h>
int main()
{
int lcm,max,a,b;
scanf("%d %d",&a,&b);
if (a>b)
{
    max=a;
}
else
{
    max=b;
}

while (1)
{
    if (max%a==0 && max%b==0)
    {
        lcm=max;
        break;
    }
    else
    {
max++;
    }
}

printf("lcm %d",lcm);

    return 0;
}
