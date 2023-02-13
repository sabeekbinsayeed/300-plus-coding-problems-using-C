
#include <stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int i=1;
    int m;
    int j=1;
    int count=1;
    while (i<=n)
    {
        scanf("%d",&m);
        count=1;
        j=1;

        while (1)
        {


            if (j%3==0 || j%10==3)
            {



                j++;
                continue;


            }

             if(count==m)
            {

                break;
            }

            count++;
            j++;











        }
        printf("%d\n",j);


        i++;

    }



    return 0;
}
