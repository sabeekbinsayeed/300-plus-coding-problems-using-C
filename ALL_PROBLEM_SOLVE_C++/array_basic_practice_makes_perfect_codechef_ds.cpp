#include <bits/stdc++.h>
using namespace std;

int main()
{
int counts=0;
int ar[4];

for (int i=0;i<4;i++)
{
    cin >> ar[i];
    if (ar[i]>=10)
    {
        counts++;
    }
}

cout << counts;



    return 0;
}





