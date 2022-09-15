
#include <stdio.h>
int main()
{
    int  num;
    printf("number\n");
    scanf("%d",&num);

    double power= pow(num,3 );
    printf("Cube of %d is %.2lf",num,power);



    return 0;
}
