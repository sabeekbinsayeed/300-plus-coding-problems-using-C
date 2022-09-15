#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{

    int guess;
    srand(time(0));
    int real=rand()%50 +1 ;
    int count=10;

    while (count>=1)
    {


        printf("Guess the number (1-50)\n");
        scanf("%d",&guess);

        if (guess==real)
        {
            printf("congrats\n");
            break;

        }
        else if (guess>real)
        {
            printf("number is less than that\n");
        }

        else if (guess<real)
        {

            printf("number is more thatn that\n");

        }




        count--;


 printf("attempt remaining %d\n", count);


    }

    if( count>10)
    {

        printf("attempt limit exceeded");
    }

    return 0;
}
