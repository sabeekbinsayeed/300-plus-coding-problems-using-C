//https://codeforces.com/contest/427

#include <stdio.h>
int main()
{
int n,a;
scanf("%d",&n);
int count=0;
int i=0;
int crime=0;
while (i<n)
{
    scanf("%d",&a);
if (a>0)
{
  if (count>0)
  {
        count=count+a;
  }
  else
  {
      count=a;
  }
  //  printf("dhukse ki bhai\n");
 //   printf("count= %d\n",count);
}
else if( a<0)
   {
        count=count+a;
        if (count<0)
        {
            crime++;
            //printf("\n crime : %d i= %d a=%d count=%d \n",crime, i,a,count);
        }

   }

   i++;
}

printf("%d",crime);

    return 0;
}
