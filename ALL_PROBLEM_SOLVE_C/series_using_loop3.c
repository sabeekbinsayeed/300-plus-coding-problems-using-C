//50 + 49 + 48 + 47 + (first 20 terms)
#include <stdio.h>
int main()
{
    int i,sum=0,num=50;
    for (i=1;i<=20;i++)
    {
        sum=sum+num;
        num--;
    }
printf("%d",sum);
    return 0;
}
