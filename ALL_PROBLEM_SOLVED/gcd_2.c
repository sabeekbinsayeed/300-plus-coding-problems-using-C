
#include <stdio.h>
int main()
{
printf("enter two numbers\n");
int x,y;
scanf("%d %d",&x,&y);
//printf("%d %d\n",x,y);


while (1)
{
if (y<x)
{
    x=y;

}

int remind=y%x;

if (remind==0)
{
    break;

}
y=x;
x=remind;





}

printf("GCD is %d",x);

    return 0;

}
  //  30 42 12
 //   12 30 6
 //   6  12 0
