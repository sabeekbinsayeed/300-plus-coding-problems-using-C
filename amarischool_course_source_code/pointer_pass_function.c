#include <stdio.h>
void change_value(int* y)
{

    *y=*y+10;
    printf("%d\n",*y);
}

int main()
{
int x=10;
printf("before function x: %d\n",x);
change_value(&x);
printf("after function x: %d\n",x);

    return 0;
}
