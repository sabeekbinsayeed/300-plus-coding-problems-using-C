#include <stdio.h>
int main()
{
    int result=0;
    int number;
    scanf("%d",&number);
    int save=number;
    int num;

    while (number)
    {
        num=number%10;
        number=number/10;
        result=result+ ( num*num*num);




    }
 printf("%d\n",result);
    if (result==save)
    {
          printf("armstrong number");
    }
    else
    {
        printf("not armstrong");
    }


 return 0;
}
