/*

Take integer value as input and output that value until you get 42. The integer value will be less than 100
*/
#include <stdio.h>
int main()
{

int n;
while (1)
{

    scanf("%d",&n);
    if (n==42)
    {
        break;
    }
    printf("%d\n",n);
}
    return 0;
}
