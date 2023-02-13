#include <stdio.h>
int main()
{
int year;
scanf("%d",&year);
if (year%400==0 || (year%100!=0) && (year%4==100))
{
    printf("leap year");
}
else
{
    printf("not leap year");
}

    return 0;
}
