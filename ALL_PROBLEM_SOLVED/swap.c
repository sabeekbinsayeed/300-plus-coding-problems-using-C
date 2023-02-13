#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter the two values\n");
    scanf("%d %d",&a,&b);
     printf("Before swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    c=a;
    a=b;
    b=c;

    printf("After swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);

    return 0;
}
