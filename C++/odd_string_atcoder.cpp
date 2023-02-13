//https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en
#include <bits/stdc++.h>
using namespace std;
int main()
{
char c[100001];
fgets(c,100001,stdin);
int length=strlen(c);
c[length]='\0';
char ch[(length/2)+1];
int k=0;
for (int i=0;i<length;i++)
{
    if (i%2==0)
    {
        ch[k]=c[i];
        k++;
    }
}
ch[k]='\0';
printf("%s",ch);

    return 0;
}
