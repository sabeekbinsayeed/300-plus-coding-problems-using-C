//1+3+5+...+29
// 2+4+6 +50
#include <stdio.h>
int main()
{
int i;
int sum=0;
for (i=2;i<=50;i=i+2)
{
   printf(" %d ",i);
   if (i!=50)
   {
       printf("+");
   }


}
//printf("%d",sum);
    return 0;
}
