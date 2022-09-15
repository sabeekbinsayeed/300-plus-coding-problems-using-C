#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum1,sum2,sum3;
    sum1=a+b;
    sum2=b+c;
    sum3=a+c;
    if (sum1<sum2 && sum1< sum3)
    {
        printf("%d\n",sum1);
    }

    else  if (sum2<sum3 && sum2< sum1)
    {
        printf("%d\n",sum2);
    }

    else  if (sum3<sum2 && sum3< sum1)
    {
        printf("%d\n",sum3);
    }
    else {
      printf("%d\n",sum1);
    }
}
