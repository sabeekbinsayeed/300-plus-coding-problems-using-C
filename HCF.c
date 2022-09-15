#include <stdio.h>

int main()
{

    int a, b,temp;
    scanf("%d %d",&a,&b);
    int i=2,rem;
    if (a>b)
    {
        temp=a;
        a=b;
        b=a;
    }
    while ( i<=a || i<=b)
    {
        rem=b%a;
        if (a%rem==0 && b%rem==0)
        {
            printf("%d",rem);
            break;
        }


    }



    return 0;
}
