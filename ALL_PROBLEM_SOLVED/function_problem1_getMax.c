/*
Write a function named get_max() which will take two integer values as parameters and return the maximum of them.

*/
#include <stdio.h>
int get_max(int x, int y)

{
    int max;
    if (x>y)
    {
        max=x;
    }
    else
    {
        max=y;
    }
    return max;
}
int main()
{

    int a,b;
    a=10;
    b=20;
    int max=get_max(a,b);
    printf("max value : %d\n",max);


    return 0;
}
