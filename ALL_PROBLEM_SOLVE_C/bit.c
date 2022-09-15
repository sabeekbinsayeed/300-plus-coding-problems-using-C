#include <stdio.h>
int main()
{

    int x;
    int num=0;
    scanf("%d",&x);
    int i=1;
    char a,b,c;
    while (i<=x)
    {
scanf(" %c%c%c",&a,&b,&c);
if (b=='+')
{
    num++;
}
else if (b=='-')
{
    num--;
}

        i++;

    }
    printf("%d\n",num);
}
