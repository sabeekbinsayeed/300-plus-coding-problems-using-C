#include <stdio.h>
int main()
{
int number;
scanf("%d",&number);
int i;
int fact=1;
for (i=1;i<=number;i++)
{
    fact=fact*i;
}
printf("%d",fact);
    return 0;
}
