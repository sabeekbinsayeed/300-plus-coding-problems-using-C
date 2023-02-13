#include <stdio.h>
int main()
{

    int a[5]={1,2,3,4,5};
    printf("%p %p",&a,&a[0]);
    printf("\n %d %d %d %d %d\n",*a,*(a+1),*(a+2),*(a+3),*(a+4));
     printf("\n %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5]);


    int b=5;
    int *p=&b;
    printf("%d %d\n",p,p+1);

    //---
    //printing array using loop
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",*(a+i));
    }
    int *pr=a;
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",*pr);
        *pr++;
    }

    return 0;
}
