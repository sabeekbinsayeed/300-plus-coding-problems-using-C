//pointer

#include <stdio.h>
int main()
{
    int a=5;
    printf("a : address %p value= %d\n",&a,a);

    int *p=&a;
   printf("p : address %p value= %p\n",&p,p);


   printf("the value of the adress that p contains %d",*p);

    return 0;
}
