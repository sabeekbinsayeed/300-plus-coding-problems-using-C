
#include <stdio.h>

int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    int total=a+b -1;
    int a_left=total-a;
    int b_left=total-b;
    printf("%d %d",a_left,b_left);
}
