
#include <stdio.h>
int main()
{

    int num,fact=1;
    scanf("%d",&num);
    while (num>=1)
    {
        fact=fact*num;
        num--;
    }
    printf("%d",fact);


    return 0;
}
