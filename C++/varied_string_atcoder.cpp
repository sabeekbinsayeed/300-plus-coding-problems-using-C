//https://atcoder.jp/contests/abc063/tasks/abc063_b?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
char ch[100];
fgets(ch,101,stdin);
int length=strlen(ch);
int i;
int flag=0;
int j;
for (i=0;i<length;i++)
{

    for (j=i+1;j<length;j++)
    {
        if (ch[i]==ch[j])
        {
            flag=1;
            break;
        }

    }
}
if (flag==1)
{
    cout << "no"<<endl;
}
else
{
    cout << "yes"<<endl;
}

    return 0;
}
