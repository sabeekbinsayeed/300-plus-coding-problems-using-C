//https://atcoder.jp/contests/abc050/tasks/abc050_a?lang=en
#include <bits/stdc++.h>
using namespace std;
int main()
{
char c;
int a,b;
int result;
cin >> a;
cin >> c;
cin >> b;
switch(c)
{

case '+':
    result=a+b;
    cout << result;
    break;

case '-':
    result=a-b;
    cout <<result;
    break;
default:
    break;

}

    return 0;
}
