
#include <stdio.h>


int add_values(int a,int b)
{

    int sum=a+b;
    a=10;
    b=100;
   return sum;
}

int main()
{
int a,b;
scanf("%d %d",&a,&b);
int catch_sum=add_values(a,b);
printf("The result of catch sum is %d\n",catch_sum);


    return 0;
}

