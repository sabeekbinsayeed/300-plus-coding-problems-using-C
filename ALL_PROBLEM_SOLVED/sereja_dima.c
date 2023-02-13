//https://codeforces.com/contest/381/problem/A

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int p1=0;
    int p2=0;
    int flag1=1;
    int flag2=0;

    int i=0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int index;
    int max=0;


    int j;
    for (j=0;j<n;j++)
    {
        max=0;
         for (i=0;i<n;i++)
    {
        if (ar[i]>max)
        {
            max=ar[i];
            index=i;
        }
    }

    if (flag1==1 && flag2==0)
    {
        p1=p1+max;
        flag1=0;
        flag2=1;

    }
    else{
             p2=p2+max;
        flag2=0;
        flag1=1;

    }
   ar[index]=-1;


    }



    printf("%d %d \n",p1,p2);





    return 0;
}
