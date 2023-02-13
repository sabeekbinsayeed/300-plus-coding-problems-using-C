//Use the above function to sort three integers a, b, c by their value. After sorting a should have the smallest value, b should have the second smallest, c the largest value. Hint: It should take three function calls.

#include <stdio.h>

void swap(int *a,int *b)
{

    if( *b<*a)
    {
        int temp=*b;
        *b=*a;
        *a=temp;
    }
}
int main()
{
    int a=5;
    int b=122;
    int c=12;
    swap(&a,&b);
      swap(&b,&c);
      swap(&a,&b);
    printf("%d %d %d",a,b,c);


    return 0;
}
