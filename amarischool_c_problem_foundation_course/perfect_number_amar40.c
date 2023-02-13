#include <stdio.h>
int main()
{

    int number;
    scanf("%d",&number);
    int i;
    int sum=0;
    for (i=1;i<number;i++)
    {
if (number%i==0)
{
    sum=sum+i;
}
    }
    if (sum==number)
    {
        printf("it is a perfect number");
    }
    else
    {
        printf("it is not a perfect number");
    }

    return 0;
}
