#include <stdio.h>
int main()
{


    const int a = 20;
printf("%d\n", a);
int *b=&a;
*b=40;

printf("%d", a);

return 0;
}
