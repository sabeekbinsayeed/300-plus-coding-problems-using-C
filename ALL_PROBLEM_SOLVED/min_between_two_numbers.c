#include <stdio.h>
int main()
{
    int a,b,min ;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);

    if( a<b)
    {
        min=a;
    }
    else{
        min=b;
    }
    printf("min between two number is %d",min);

}
