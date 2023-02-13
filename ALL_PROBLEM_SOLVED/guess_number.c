#include <stdio.h>
int main()
{
    int guess;
    int real=44;
    int upper=50;
    int lower=40;

    while (1)
    {
        printf("Guess the number\n");
        scanf("%d",&guess);

        if (guess==real)
        {
            printf("congrats\n");
            break;

        }
        else if (guess>upper)
        {
            printf("number is less than that\n");
        }

        else if (guess<lower)
        {

            printf("number is more thatn that\n");

        }
        else{
            printf("you are very close\n");
        }


    }

    return 0;
}
