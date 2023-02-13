
/*

Sample Input 1

2 11
Sample Output 1

Yes

*/

//module 10.5
//https://atcoder.jp/contests/abc208/tasks/abc208_a?lang=en

#include <stdio.h>
int main()
{
   int a,b;

scanf("%d",&a);
scanf("%d",&b);
int highest=6*a;
int lowest = 1*a;


if (b>=lowest && b<=highest)
{
    printf("Yes\n");
}
else{
    printf("No\n");
}


    return 0;
}




