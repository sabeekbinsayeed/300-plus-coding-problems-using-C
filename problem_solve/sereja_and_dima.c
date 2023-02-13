//https://codeforces.com/problemset/problem/381/A

// module 31 practice

#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int ar[n];
int i;
int count_s=0, count_d=0;
for (i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
}
for (i=0;i<n;i++)
{
    printf("%d\n",ar[i]);
}

int flag=1;
int max=ar[0];
int j=0;
for (j=0;j<n;j++)
{

    if (j%2==0)
    {
        flag=1;
        printf("s hoar kotha\n");
    }
    else{
        flag=0;
        printf("d hoar kotha\n");
    }

 printf("loop starts ------------------------%d %d",j,flag);
    for (i=0;i<n;i++)
{


    if (ar[i]<0)
    {
        printf("continue etobar\n");
        continue;
    }
    if (ar[i]>max)
    {
          printf("loop e  etobar\n");


        if (flag==1)
        {
            printf("s bhaiya %d\n",ar[i]);
            count_s=count_s+ar[i];
            ar[i]=-99;
            max=ar[i];

        }
        else
        {
             printf("d bhaiya %d\n",ar[i]);
            count_d=count_d+ ar[i];
             ar[i]=-99;
             max=ar[i];

        }

    }

}
}

printf("%d %d\n",count_s,count_d);


    return 0;
}
