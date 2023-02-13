//https://codeforces.com/contest/677
#include <stdio.h>
int main()
{

int a,b;
scanf("%d %d",&a,&b);
int i=0;
int count=0;
int val;
while (i<a)
{
    scanf("%d",&val);
    if (val<=b)
    {
        count=count+1;
    }
    else

    {
        count=count+2;
    }

    i++;


}

printf("%d",count);
    return 0;
}
