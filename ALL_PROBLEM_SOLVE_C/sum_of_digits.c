//https://codeworld19.blogspot.com/2020/04/sum-of-digits-of-five-digit-number-in-c.html
#include <stdio.h>
int main()
{
    int i=0;
int num;
scanf("%d",&num);
 int sum=0;
 int rem;

 for (i=0;i<5;i++)
 {
    rem=num%10;
    num=num/10;
    sum=sum+rem;

 }
 printf("%d\n",sum);

    return 0;
}
