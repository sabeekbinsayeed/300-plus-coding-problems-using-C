#include <stdio.h>
int main()
{
    int a, b;
   scanf("%d",&a);
scanf("%d",&b);
int flag=0;
    int i=1,j;
    while (i<=a)
    {
        if (i%2!=0)
        {
            for (j=1;j<=b;j++)
            {
                printf("#");
            }
            printf("\n");
        }

        else

        {
           if (flag==1)
           {
                printf("#");
                for (j=2;j<=b;j++)
                {

                    printf(".");
                }
                flag=0;
                printf("\n");

           }
           else if (flag==0)
           {

                for (j=1;j<b;j++)
                {

                    printf(".");
                }
                printf("#");
                flag=1;
                printf("\n");
           }





        }
        i++;

    }

    return 0;
}
