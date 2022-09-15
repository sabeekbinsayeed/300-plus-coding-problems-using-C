#include <stdio.h>
int main()
{
int x,y,n;
scanf("%d %d %d",&x,&y,&n);
int i=1;
while (i<=n)
{
    if (i%x==0 && i%y==0)
    {

        printf("FizzBuzz\n");
    }


    else if (i%y==0)
    {

        printf("Buzz\n");
    }
    else if (i%x==0)
    {
        printf("Fizz\n");

    }
    else {
        printf("%d\n",i);
    }

    i++;
}

return 0;
}
