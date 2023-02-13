//https://atcoder.jp/contests/abc069/tasks/abc069_b?lang=en
#include <bits/stdc++.h>

using namespace std;
int main()
{
char ch[100];
fgets(ch,101,stdin);
int length=strlen(ch);
int value=length-3;

   char chh[100] = to_string(value);
char first=ch[0];
char last=ch[length-2];
cout << first << value << last;








    return 0;
}
