
/*
A triple of numbers is said to be poor when two of those numbers are equal but the other number is different from those two numbers.

You will be given three integers AA, BB, and CC. If this triple is poor, print Yes; otherwise, print No.



Input
5 7 5


Output
Yes


*/

//module 9.5
// https://vjudge.net/contest/490793#problem/G
// AtCoder Beginner Contest 155 https://atcoder.jp/contests/abc155/tasks/abc155_a?lang=en
#include <stdio.h>
int main()
{
   int a,b,c;
   scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
 if (a==b || a==c)
 {
     if ( a==b && a==c)
     {
         printf("No\n");
     }
     else
     {

         printf("Yes\n");
     }

 }



 else if (b==a || b==c)
 {
     if (b==a && b==c)
     {
         printf("No\n");
     }
     else
     {

         printf("Yes\n");
     }
 }

 else
 {

     printf("No\n");
 }





    return 0;
}


