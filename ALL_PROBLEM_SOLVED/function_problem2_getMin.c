
/*
Write a function named get_min() which will take two integer values as parameters and return the minimum of them.

*/
#include <stdio.h>
int get_min(int x, int y)

{
    int min;
    if (x<y)
    {
        min=x;
    }
    else
    {
        min=y;
    }
    return min;
}
int main()
{

    int a,b;
    a=10;
    b=20;
    int min=get_min(a,b);
    printf("min value : %d\n",min);


    return 0;
}
