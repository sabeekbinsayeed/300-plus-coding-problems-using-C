#include <stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int i=0;
    int count=0,k;
    int times, j;
    int result=0;
    int number;
    int temp=-1;

    while (i<n)
    {


        scanf("%d",&times);

        int number;


        for (j=0; j<times; j++)
        {
            scanf("%d",&number);
            if (temp==number)
            {
                count++;
            }
            else
            {
                count=0;
            }
            if (count==2)
            {
                result=temp;

            }
            temp=number;

            }



        if (result==0)
        {

            printf("result : -1\n");
        }
        else
        {
            printf("resutl: %d\n",result);
        }
        result=0;






        i++;
    }



    return 0;
}

