//https://atcoder.jp/contests/abc050/tasks/abc050_a?lang=en
#include <bits/stdc++.h>
int main()
{
char c;
int a,b;
cin >> a>> b>> c;
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
