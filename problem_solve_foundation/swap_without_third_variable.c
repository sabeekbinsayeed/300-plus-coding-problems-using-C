#include <stdio.h>
int main()
{

    int a, b;
    printf("Enter the two values\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Before swapping\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);


    return 0;
}



