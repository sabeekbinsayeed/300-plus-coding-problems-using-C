

/*

7,8,9,11,13,14,16,17,.... (১ থেকে 60 এমন সংখ্যা যারা ৬০ এর উৎপাদক নয়)


*/
#include <stdio.h>
int main()
{
    int i,sum=0,num=50;
    for (i=1; i<=60; i++)
    {
        if (60%i==0)
        {
            continue;
        }



        printf("%d",i);
        if (i==59)
            continue;

        printf(",");
    }

    return 0;
}

