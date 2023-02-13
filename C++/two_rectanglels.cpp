//https://atcoder.jp/contests/abc052/tasks/abc052_a?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
int val1=a*b;
int val2=c*d;
if (val1>val2)
{
    cout << val1<<endl;
}
else
{
    cout <<val2<<endl;
}
    return 0;
}

