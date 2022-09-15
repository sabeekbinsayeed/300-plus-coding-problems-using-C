
/*

input
3
0 0 1

output
HARD

*/

//https://vjudge.net/problem/CodeForces-1030A
//https://vjudge.net/problem/CodeForces-1030A

#include <stdio.h>
int main()
{
   int a,b;

scanf("%d",&a);
int i=1;
int flag=0;
while (i<=a)
{

    scanf("%d",&b);
    if (b==1)
    {
        flag=1;
    }

    i++;

}

if (flag==1)
{
    printf("HARD");
}
else
{
    printf("EASY");
}

    return 0;
}





