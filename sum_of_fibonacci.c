/*

fibonacci series

0,1,1,2,3,5,8


*/

#include <stdio.h>
int main()
{

int a=0;
int b=1;
int sum=0;

int terms;
scanf("%d",&terms);
printf("series: %d %d ",a,b);
int i=3;
sum=a+b;
while (i<=terms)
{
    int res=a+b;
 printf("%d ",res);


    sum=sum+res;

    a=b;
    b=res;
    i++;

}
 printf("\n%d ",sum);




    return 0;
}

