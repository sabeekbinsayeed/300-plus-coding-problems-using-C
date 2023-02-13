// https://codeforces.com/problemset/problem/1154/A

#include <stdio.h>
int main()
{

    int a, b, c,d,max;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (a >=b && a>=c && a >=d)
    {
        max=a;


    }

    else if (b >=a && b>=c && b >=d)
    {
        max=b;
    }
    else if (c >=a && c>=d && c >=b)
    {
        max=c;
    }
    else
    {
        max=d;
    }

    if (max>a) printf("%d\n",max-a);
    if (max>b) printf ("%d\n",max-b);
    if (max>c) printf("%d\n",max-c);
    if (max>d) printf("%d\n",max-d);
    return 0;
}
