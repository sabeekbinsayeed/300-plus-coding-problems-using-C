
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3];
    for (int i=0;i<3;i++)
    {
        cin >> ar[i];
    }
    int value=ar[0];
    int inequal=1;

    for (int i=1;i<3;i++)
    {
        if (value!=ar[i])
        {
            inequal++;
        }
    }

cout << inequal << endl;;
    return 0;
}
