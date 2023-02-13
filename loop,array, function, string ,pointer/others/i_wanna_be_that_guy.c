/*
https://vjudge.net/contest/498956#problem/A
https://codeforces.com/problemset/problem/469/A
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int check[n+1];

    int a;
    int val;
    int i;
    i=0;
    scanf("%d",&a);
    while (i<a)
    {
        scanf("%d",&val);

        if (check[val]!=1)
        {

            check[val]=1;
        }
        i++;

    }

    int b;
    i=0;
    scanf("%d",&b);
    while (i<b)
    {
         scanf("%d",&val);


        if (check[val]!=1)
        {

            check[val]=1;
        }
        i++;

    }
    for (i=1; i<=n; i++)
    {

        if (check[i]!=1)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }


    printf("I become the guy.\n");
    return 0;
}
