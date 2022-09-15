
/*

Sample Input 0

4
73
67
38
33
Sample Output 0

75
67
40
33

*/

//module 9.5
// https://www.hackerrank.com/contests/world-codesprint-9/challenges

#include <stdio.h>
int main()
{
   int number;
   scanf("%d",&number);
   int temp, x;


 int i=1;
 while (i<=number)
 {
     scanf("%d",&x);
     if (x<38)
     {
            printf("%d\n",x);
            i++;
            continue;
     }
     temp=x%5;

     if (temp>=3)
     {
         x=x+(5-temp);
     }
     printf("%d\n",x);

 i++;


 }





    return 0;
}




