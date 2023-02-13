#include <stdio.h>
int main()
{
    int x;
    printf("enter your value:");
    scanf("%d",&x);
    int digit;
    int temp;
    int number =0;
    int last=x%10;
    while (x)
    {

        digit=x%10;
         temp=x;
        x= x/10;

        number=number * 10 + digit;



    }

printf("%d %d",temp,last);
    return 0;
}



