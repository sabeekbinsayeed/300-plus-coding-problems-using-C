//https://atcoder.jp/contests/abc043/tasks/abc043_a?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y;
    cin >> n>>k>>x>>y;
    int i;
    int sum=0;
    if (n<k)
    {
        k=n;
    }
    for (i=1;i<=k;i++)
    {
        sum=sum+ x;
    }

    int j=i;
    for (j=i;j<=n;j++)
{
    sum=sum+y;
}
cout << sum << endl;

    return 0;
}
