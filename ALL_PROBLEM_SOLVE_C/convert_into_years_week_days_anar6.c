#include <stdio.h>
int main()
{
int days;
scanf("%d",&days);
int year,rest,day,week;
year=days/365;
rest= days%365;
week=rest/7;
rest=rest%7;

printf("%d year %d week %d days",year,week,rest)

;
    return 0;
}
