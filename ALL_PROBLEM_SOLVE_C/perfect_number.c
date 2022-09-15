// 6 and 28 are perfect numbers from 1-50
// 6= 1+2+3 6 divisible by 1,2,3,6 if we add 1+2+3 then it is perfect number
#include <stdio.h>
int main()
{
  int range_number;
  scanf("%d",&range_number);
  int i=1;

    while (i<=range_number)
    {

        int sum=0,j=1;
        while (j<i)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
            j++;
        }

        if (sum==i)
        {
            printf("%d\n",i);


        }
        i++;
    }

    return 0;
}
