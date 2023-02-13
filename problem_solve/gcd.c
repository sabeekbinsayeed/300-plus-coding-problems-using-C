#include <stdio.h>
int main()
{
printf("enter two numbers\n");
int x,y;
scanf("%d %d",&x,&y);
//printf("%d %d\n",x,y);

int half=x/2;
int i=0;
int res;
while (i<x && i<y)
{

    i++;
 //   printf("%d\n",i);


    if ( x%i==0 && y%i==0)
    {
//printf("%d\n",i);
        res=i;
    }
}

printf("GCD is %d",res);



    return 0;
}
