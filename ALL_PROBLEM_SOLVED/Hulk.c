#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;

    while (1)
    {
        if (i==n)
        {
            if (i%2==0)
            {
                printf("I love it");

            }
            else

            {
                printf("I hate it");

            }

            break;

        }
        if (i%2!=0)
        {
            printf("I hate that ");
        }

        else
        {
            printf("I love that ");
        }

        i++;
    }


    return 0;
}
