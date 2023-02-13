//https://vjudge.net/problem/AtCoder-abc068_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=7;
int counts;
int saved=0;
 counts=0;
int result=1;
 int i;
 int number;
 cin >> number;
 for (i=1;i<=number;i++)
 {
     n=i;
     counts=0;

 while (n)
{

    if (n%2==0)
    {
        counts++;
        n=n/2;
    }
    else
    {
        break;
    }


}
  if (counts>saved)
    {
        saved=counts;
        result=i;
    }

 }

cout<<result<<endl;
    return 0;
}
