//12345 ~ 1+2+3+4+5 ~ 15
#include <stdio.h>
int main()
{
 //   int x=12345;
 int x;
 printf("enter your value: ");
 scanf("%d",&x);
    int temp=x;
    int sum=0;
    int y,z;
    while (1)
    {
        y=temp/10;
        z=temp%10;
        sum=sum+z;
        temp=y;
        if (z==0){
            break;
        }


    }
    printf("%d",sum);
    return 0;
}
