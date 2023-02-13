

//https://vjudge.net/problem/CodeForces-677A
/*
Input
3 7
4 5 14

Output
4


*/
#include <stdio.h>
#include <math.h>

int main()
{
   int n,h,count=0;

scanf("%d",&n);
scanf("%d",&h);
int w;

int i=1;
while (i<=n)
{
    scanf("%d",&w);
    if (w>h)
    {
count=count+2;
    }
    else
    {

        count=count+1;
    }

    i++;


}

printf("%d\n",count);





    return 0;
}

