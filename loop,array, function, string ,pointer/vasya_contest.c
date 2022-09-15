//https://codeforces.com/problemset/problem/155/a
//moudule 31

#include <stdio.h>
int main()
{
    int max,min;

    int n;
    int i=1;
    scanf("%d",&n);
    int num;
    scanf("%d",&num);
    max=num;
    min=num;
    int count=0;
    while (i<n)
    {
        scanf("%d",&num);
         if (num>max)
         {

             max=num;
             count++;



         }

         else if (num<min)
         {

             min=num;
             count++;


         }



        i++;
    }

    printf("%d",count);


    return 0;
}
