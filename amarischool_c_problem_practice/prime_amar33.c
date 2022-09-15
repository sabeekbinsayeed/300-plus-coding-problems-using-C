#include <stdio.h>
int main()
{
int number;
scanf("%d",&number);
int i;
int flag=1;
for (i=2;i<=number/2;i++)
{
    if (number%i==0)
    {
        flag=0;
    }
}

if(flag==0)
{
    printf("not prime");
}
else
    printf("prime");
    return 0;
}
