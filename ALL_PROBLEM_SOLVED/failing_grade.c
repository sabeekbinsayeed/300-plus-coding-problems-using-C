/*
Exawizards Programming Contest 2021（AtCoder Beginner Contest 222）


10.5 module practice

*/
#include <stdio.h>

int main()
{

    int n, p,count=0,number;
    scanf("%d %d",&n,&p);
    int i=1 ;
    while (i<=n)
    {

        scanf("%d",&number);
        if (number<p)
        {
           count=count+1;


        }
        i++;


    }

    printf("%d\n",count);


    return 0;
}
