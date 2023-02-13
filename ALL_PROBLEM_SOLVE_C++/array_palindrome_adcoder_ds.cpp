#include <bits/stdc++.h>
using namespace std;

void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}


int main()
{

    int i;


string str;
cin >> str;
   string news=str;
   reverseStr(str);
    if (str==news)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }



    return 0;
}
