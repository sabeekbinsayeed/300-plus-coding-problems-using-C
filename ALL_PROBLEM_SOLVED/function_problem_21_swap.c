//The function sort(int *a, int *b) sorts the variables a, b by their value. If a is smaller, the function does nothing, otherwise it swaps them. Implement the function.

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
    int b=1;
    swap(&a,&b);
    printf("%d %d",a,b);


    return 0;
}
