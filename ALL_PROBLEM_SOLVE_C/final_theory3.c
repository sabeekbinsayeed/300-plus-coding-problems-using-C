/*

What are pointers? Give some examples of pointers.  Make a pointer that points to a structure variable (format is given below), and change the value of sum using pointer.
struct Fun
{
    int sum;
}

*/

#include <stdio.h>
struct fun
{
    int sum;
};

int main()
{
struct fun f;
f.sum=10;
struct fun *p;
p=&f;
p->sum=20;
printf("%d",f.sum);

    return 0;
}
