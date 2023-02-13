#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int temp1=a+b;
int temp2=b+c;
int temp3=c+a;
if(temp1> c && temp2>a && temp3>b)
{
    printf("can be formed");
}
else
{

    printf("life is sad");
}

    return 0;
}
