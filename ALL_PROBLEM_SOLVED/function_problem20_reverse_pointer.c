//Write a C function that takes an integer and reverses its digits. The function should have the signature void reverse(int* ).

#include <stdio.h>

void reverse(int* a)
{
    int value=0;
    int rem;
    while (*a)
    {
        rem=*a%10;
        *a=*a/10;
        value=value*10 + rem;
    }
    *a=value;
}
int main()
{
    int a=1234;
    reverse(&a);
    printf("%d",a);


    return 0;
}
