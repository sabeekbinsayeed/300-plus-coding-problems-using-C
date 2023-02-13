#include <stdio.h>
#include <math.h>
int main()
{

    int ar[]={1,2,4,8,16};
   int binary;
   scanf("%d",&binary);
   int rest;
   int k=0;
   int sum=0;
   int val;
   int i=0;
   while (binary)
   {
       rest=binary%10;
       binary=binary/10;
       val=pow(2,i);
       if (rest==1)
       {
           sum=sum+val;
       }
       k++;
       i++;
   }

   printf("%d",sum);


}
