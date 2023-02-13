//https://atcoder.jp/contests/abc219/tasks/abc219_a?lang=en



// lab exam 3

#include <stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int value;

    if (n>=0 && n<40)

    {
        value=40-n;
         printf("%d",value);
    }

     else if (n>=40 && n<70)

    {
        value=70-n;
         printf("%d",value);
    }
     else if (n>=70 && n<90)

    {
        value=90-n;
         printf("%d",value);
    }
    else
    {

        printf("expert");
    }




    return 0;
}
