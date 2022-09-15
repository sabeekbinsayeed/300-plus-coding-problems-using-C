

//https://codeforces.com/problemset/problem/200/B
/*
input
3
50 50 100
output
66.666666666667


*/
#include <stdio.h>
#include <math.h>

int main()
{
   int n;
   double sum=0;
   double h;

scanf("%d",&n);



int i=1;
while (i<=n)
{
   scanf("%lf",&h);
   sum=sum+h;
   i++;



}
float avg=sum/n;
printf("%f\n",avg);





    return 0;
}

