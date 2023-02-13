
//AtCoder Beginner Contest 143
//10.5 practice
//https://vjudge.net/contest/491097#problem/A


#include <stdio.h>
int main()
{

    int a , b;
    scanf("%d %d",&a,&b);

    int covered=b*2;

    if ( covered >= a)
    {
        printf("0");
    }
    else
    {
        printf("%d\n",a-covered);
    }



    return 0;
}
