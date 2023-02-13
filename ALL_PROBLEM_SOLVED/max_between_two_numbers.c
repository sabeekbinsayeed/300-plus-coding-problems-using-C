#include <stdio.h>
int main()
{
    int a,b,max ;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);

    if( a>b)
    {
        max=a;
    }
    else{
        max=b;
    }
    printf("max between two number is %d",max);

}
