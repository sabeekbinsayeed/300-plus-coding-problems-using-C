#include <stdio.h>
int main()
{
int number;
scanf("%d",&number);
int msd,lsd;
msd=number/100001;
lsd=number%10;
int sum=msd+lsd;
printf("%d",sum);

    return 0;
}
