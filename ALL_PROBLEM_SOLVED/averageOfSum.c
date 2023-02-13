
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i=0;
double a, b,avg,sum=0;
while (i<n)
{
  scanf("%lf %lf",&a,&b);
  avg=a*b;
  sum=sum+avg;
    i++;
}
printf("%.3lf\n",sum);
    return 0;
}
