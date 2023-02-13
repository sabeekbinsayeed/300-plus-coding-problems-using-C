#include <stdio.h>
int main()
{

    int limit,n;
    scanf("%d %d",&limit,&n);
    int real_limit=limit;
    int used;

    int baki=0,i=0;
    while(i<n)

    {

        scanf("%d",&used);
        limit=real_limit+baki;
        baki=limit-used;


        i++;

    }

    limit=baki+real_limit;
    printf("%d\n",limit);


return 0;

}



