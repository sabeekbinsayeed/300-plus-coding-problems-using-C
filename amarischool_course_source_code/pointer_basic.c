#include <stdio.h>

int main()
{

int a=20;
printf("value of a:%d  address of a: %p\n",a,&a);

int *p=&a;
printf("value of p: %p\n",p);

a=30;

printf("the value that p points %d" ,*p);


    return 0;
}
