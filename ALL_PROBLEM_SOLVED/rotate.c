//https://atcoder.jp/contests/abc235/tasks/abc235_a?lang=en

#include <stdio.h>

int main()
{
    int x;

    scanf("%d",&x);
    int digit;
    int number =0;
    int real=x;



    int middle= real/100 + (real%100)*10;

    int reverse= middle/100 + (middle%100)*10;

int result=real+middle+reverse;
printf("%d",result);

}


