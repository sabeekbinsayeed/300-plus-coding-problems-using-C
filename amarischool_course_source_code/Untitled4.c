#include <stdio.h>
int main()
{
    int salary[5];
    int bonus;
    scanf("%d",&bonus);
    int i;

    for (i=0;i<5;i++)
    {
        scanf("%d",&salary[i]);
    }

    for (i=0;i<5;i++)
    {
        salary[i]=salary[i]+bonus;

        printf("%d\n",salary[i]);
    }


    return 0;
}
