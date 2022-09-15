//https://atcoder.jp/contests/abc227/tasks/abc227_a?lang=en
#include <stdio.h>
int main()
{
    int n,k,a;
    scanf("%d %d %d",&n,&k,&a);

    // 3 4 1

    int i=1;
    int count=a;
    while (1)
    {

        if (i==k)
            break;
        if (count==n)
        {
            count=1;
        i++;
        continue;
        }

        i++;
count++;

    }

    printf("%d",count);

    return 0;
}

