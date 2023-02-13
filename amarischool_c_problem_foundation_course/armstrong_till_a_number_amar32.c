#include <stdio.h>
int main()
{
    int result=0;
    int number;
    int n;
    scanf("%d",&n);

    int num;
int i;
for (i=1;i<=n;i++)
{
    result=0;
    number=i;

    while (number)
    {
        num=number%10;
        number=number/10;
        result=result+ ( num*num*num);



    }

    if (result==i)
    {
          printf("armstrong number %d\n",i);
    }



}


 return 0;
}

