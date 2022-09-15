
/*
Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?



Input
4 7



Output
2


*/

//module 9.5
// https://codeforces.com/contest/791

#include <stdio.h>
int main()
{
   int a,b,c;
   scanf("%d",&a);
scanf("%d",&b);

 int i=1;
 while (1)
 {
     a=a*3;
     b=b*2;

     if( a>b)
     {
         break;
     }

     i++;



 }

 printf("%d\n",i);

    return 0;
}



