#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int price[n];
   // price[0],price[1],price[2],price[3]


   int i;
   for (i=0;i<n;i++)
   {

       scanf("%d",&price[i]);
   }


  for (i=0;i<n;i++)
  {
      printf("%d\n",price[i]);
  }


    /*
    int price1,price2,price3,price4;
    scanf("%d",&price1);
    scanf("%d",&price2);
    scanf("%d",&price3);
    scanf("%d",&price4);
    */


    return 0;
}

