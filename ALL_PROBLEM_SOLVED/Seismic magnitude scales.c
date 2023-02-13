//https://vjudge.net/problem/AtCoder-abc221_a
/*
Sample 1
Input	Output
6 4
1024

*/
#include <stdio.h>
#include <math.h>

int main()
{
   int a,b;

scanf("%d",&a);
scanf("%d",&b);

int dif=a-b;

if (dif==0)
{

    printf("1");
}
else{
    int res=pow(32,dif);
    printf("%d\n",res);
}




    return 0;
}

