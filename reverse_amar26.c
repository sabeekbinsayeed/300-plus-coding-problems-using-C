#include <stdio.h>
int main()
{
    int x;
    printf("enter your value:");
    scanf("%d",&x);
    int digit;
    int number =0;
    while (x)
    {

        digit=x%10;
        x= x/10;
        number=number * 10 + digit;



    }

printf("%d",number);
    return 0;
}


