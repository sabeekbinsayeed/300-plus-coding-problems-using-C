
#include <stdio.h>
int main()
{
    int a,b,c,max ;
    printf("enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c );

    if( (a>b)& (a>c))
    {
        max=a;
    }
    else   if( (b>a)& (b>c))
    {
        max=b;
    }
    else
    {
        max=c;
    }
    printf("max between the three numbers is %d",max);

    return 0;

}
