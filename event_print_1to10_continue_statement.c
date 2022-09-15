
// question: print all the even numbers from 1 to 10
#include <stdio.h>
int main()
{
   int i=0;
   while (i<=10)
   {
       i++;
       if ((i%2)!=0)
       {
continue;

       }
         printf("%d\n",i);

   }

    return 0;
}

