
//https://atcoder.jp/contests/abc200/tasks/abc200_a?lang=en
/*
Sample Input 1

2021
Sample Output 1

21

*/
#include <stdio.h>
#include <math.h>

int main()
{
   int a,b;

scanf("%d",&a);
int div=a/100;
int rem=a%100;
//printf("%d\n",div);
//printf("%d\n",rem);


if ( a<100)
{
    printf("1");
}
else if ( rem==0 )
{

    printf("%d",div);
}
else  {
    printf("%d",div+1);
}







    return 0;
}

