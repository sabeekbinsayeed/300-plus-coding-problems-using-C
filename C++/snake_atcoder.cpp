//https://atcoder.jp/contests/abc067/tasks/abc067_b?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{

int sizes,can_take;
cin >> sizes >> can_take;
int ar[sizes];
for (int i=0;i<sizes;i++)
{
    cin >> ar[i];
}

sort (ar,ar+sizes,greater<int>());
int sum=0;
for (int i=0;i<can_take;i++)
{
    sum=sum+ar[i];

}
cout << sum;
    return 0;
}
