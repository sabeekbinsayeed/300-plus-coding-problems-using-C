
//Make a pointer variable P which points to an integer variable. Make another pointer variable Q which points to the pointer P. Now make another pointer variable R which points to the pointer Q. Now change the value of that integer variable by accessing pointer R.

#include <stdio.h>
int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    ***r=20;
    printf("%d ",a);


    return 0;
}
