
#include <bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin >> str;

int length=str.length();
int start=-1;
int ends=-1;

for (int i=0;i<length;i++)
{
if (str[i]=='A' && start==-1)
{
    start=i;
}

if (str[i]=='Z')
{
    ends=i;
}



}

int result=(ends-start)+1;
cout << result << endl;

    return 0;
}
