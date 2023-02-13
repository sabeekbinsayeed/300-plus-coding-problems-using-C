#include <stdio.h>

int main()
{

    int a, b,lcm,max;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }

    while (1)
    {

        if (max%a==0 && max%b==0)
        {
            lcm=max;
            break;
        }
        else{
            max=max+1;
        }

    }
printf("lcm : %d\n ",lcm);



    return 0;
}
