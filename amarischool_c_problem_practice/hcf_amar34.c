#include <stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
int i;
int temp;
int result;
 if (a>b)
    {
        temp=a;
        a=b;
        b=a;
    }


for (i=2;i<=a;i++)
{
    if (a%i==0 && b%i==0)
    {
        result=i;
    }

}
printf("%d",result);

    return 0;
}
