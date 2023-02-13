//pointer

#include <stdio.h>
int main()
{
    int a=5;
    printf("a : address %p value= %d\n",&a,a);

    int *p=&a;
   printf("p : address %p value= %p\n",&p,p);

   int **q=&p;

  printf("q : address %p value= %p\n",&q,q);

   printf("the value of the adress that p contains %d\n",*p);
   printf("the value of the adress that q contains %d\n",**q);

     printf("see what *q brings %p\n",*q);

     *p=10;
     printf("a: %d\n",a);
     **q=20;
     printf("a: %d",a);


    return 0;
}

