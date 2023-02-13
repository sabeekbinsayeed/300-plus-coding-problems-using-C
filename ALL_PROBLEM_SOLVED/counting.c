//https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
#include <stdio.h>
int main()
{

int a,b;
scanf("%d",&a);
scanf("%d",&b);
int val=(b-a)+1;
if (a>b)
{
    val=0;
}
printf("%d",val);




    return 0;
}
