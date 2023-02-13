//https://atcoder.jp/contests/abc055/tasks/abc055_a?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cin>>a;
   int val=a*800;
   int res=a/15;

 if (a>=15)
 {
val=val-200*res;
 }
 cout << val;
    return 0;
}

