#include <stdio.h>
int main()
{
    int number;
scanf("%d",&number);

int pow;
scanf("%d",&pow);
int result=1;
int i;
for (i=1;i<=pow;i++)
{
    result=result*number;
}
printf("%d",result);
    return 0;
}
