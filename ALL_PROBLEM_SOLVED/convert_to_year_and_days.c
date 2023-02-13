#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int year,days;
    year=number/365;
    printf("year: %d\n",year);
    days=number%365;
    printf("days: %d",days);


    return 0;
}
