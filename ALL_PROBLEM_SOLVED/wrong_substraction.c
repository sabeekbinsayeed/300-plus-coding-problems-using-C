
/*

input
512 4
output
50


*/
//The first example corresponds to the following sequence: 512 \rightarrow 511 \rightarrow 510 \rightarrow 51 \rightarrow 50512→511→510→51→50.

//module 9.5
// https://vjudge.net/contest/490793#problem/F
// Codeforces Round #479 (Div. 3)
#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d",&a);
scanf("%d",&b);
   while (b>0)
   {
       if (a%10 ==0)
       {
           a=a/10;
       }
       else{
        a--;
       }


       b--;
   }

   printf("%d\n",a);




    return 0;
}

