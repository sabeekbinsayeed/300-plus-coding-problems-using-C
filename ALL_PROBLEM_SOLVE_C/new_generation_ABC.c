
//https://vjudge.net/problem/AtCoder-abc214_a

#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);

if(n>=1 && n<=125)
{

    printf("4");

}
else if ( n>=126 && n<=211)
{
  printf("6");
}
else if ( n>=212 && n<=214)
{
  printf("8");
}


    return 0;
}
