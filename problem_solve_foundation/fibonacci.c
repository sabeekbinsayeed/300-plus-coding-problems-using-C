/*

fibonacci series print

0,1,1,2,3,5,8


*/

#include <stdio.h>
int main()
{

int a=0;
int b=1;

int terms;
scanf("%d",&terms);
printf("%d %d ",a,b);
int i=3;
while (i<=terms)
{
    int res=a+b;


    printf("%d ",res);

    a=b;
    b=res;
    i++;

}




    return 0;
}

