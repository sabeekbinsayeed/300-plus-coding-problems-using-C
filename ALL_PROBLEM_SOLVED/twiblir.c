/*

You are on a social networking site called twiblr.
In twiblr, you can follow at most

 2×( the number of users following you )+100 users.


You are currently following B users, and A users are following you.
At most, how many extra users can you follow now?

Sample Input 1

200 300
Sample Output 1

200

*/
// https://atcoder.jp/contests/abc182/tasks/abc182_a?lang=en
#include <stdio.h>
int main()
{
    int a, b, formula, result;
scanf("%d",&a);
scanf("%d",&b);
formula=(2*a)+100;
result=formula-b;
printf("%d\n",result);






    return 0;
}
