//1+3+5+...+29

#include <stdio.h>
int main()
{
    int i,sum=0;
    for (i=1;i<=29;i=i+2)
    {
        sum=sum+i;
    }
printf("%d",sum);
    return 0;
}
