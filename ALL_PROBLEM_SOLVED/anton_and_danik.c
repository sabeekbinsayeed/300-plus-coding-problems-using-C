
#include <stdio.h>
int main()
{

int n;
scanf("%d",&n);
int i=0;
char ch;
int count_d=0, count_a=0;

while (i<n)
{

    scanf(" %c",&ch);


    if (ch=='A')
    {
count_a=count_a+1;

    }


   else if (ch=='D')
    {
        count_d=count_d+1;



    }



i++;



}

if (count_a>count_d)
    {
        printf("Anton\n");

    }
    else if (count_d > count_a)
    {
        printf("Danik\n");

    }
    else if (count_d==count_a)
    {
        printf("Friendship\n");
    }


    return 0;
}
