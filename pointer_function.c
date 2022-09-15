#include <stdio.h>

void change(int *p)
{
    *p=2000;


}

int main()
{

    int x=10;
    change(&x);
    printf("%d\n",x);
    return 0;
}
