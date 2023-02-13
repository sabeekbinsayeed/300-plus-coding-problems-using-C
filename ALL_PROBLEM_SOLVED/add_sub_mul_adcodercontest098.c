

/*



You are given two integers A and B. Find the largest value among A+B, A-B, and A×B.


Input
3 1


Output
4
*/
// https://vjudge.net/contest/490793#problem/E
// add coder contest 098
#include <stdio.h>
int main()
{
   int a,b, add,min,mul;
   scanf("%d",&a);
scanf("%d",&b);
   add= a+b;
   min=a-b;
   mul=a*b;
   if (add >= min && add >= mul)
   {
       printf("%d\n",add);
   }
   else  if (min >= add && min >= mul)
   {
       printf("%d\n",min);
   }
   else {
    printf("%d\n",mul);
   }



    return 0;
}
