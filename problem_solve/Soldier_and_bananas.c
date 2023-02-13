/*

A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

Input


Input
3 17 4

Output
13
*/
// https://vjudge.net/contest/490793#problem/D
#include <stdio.h>
int main()
{
    int k,n,w,i=1;
    int cost=0, required;
    scanf("%d %d %d",&k,&n,&w);
  while (i<=w)
  {

      cost=cost + k*i;


      i++;

  }

  if (cost > n)
  {

      required=cost -n ;
  }
  else{
    required=0;
  }
printf("%d",required);




    return 0;
}
