
#include <stdio.h>
int main()
{
    int a,b,c,min ;
    printf("enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c );

    if( (a<b)& (a<c))
    {
        min=a;
    }
    else   if( (b<a)& (b<c))
    {
        min=b;
    }
    else
    {
        min=c;
    }
    printf("min between the three numbers is %d",min);

    return 0;

}

