#include <stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("%d %p",a,&a);
    printf("\n %d %p",*p,p);

    return 0;
}
