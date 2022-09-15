
int factorial(num)
{
    int i;
    int mul=1;
    for (i=1;i<=num;i++)
    {
        mul=mul*i;
    }

    return mul;
}
#include <stdio.h>
int main()
{

    int i;
scanf("%d",&i);
    int n;
scanf("%d",&n);


int number;
int num;
int result;

for (;i<=n;i++)
{
    result=0;
    number=i;

    while (number)
    {
        num=number%10;
        number=number/10;
        result=result+ factorial(num);





    }

    if (result==i)
    {
          printf("armstrong number %d\n",i);
    }

}






 return 0;
}


