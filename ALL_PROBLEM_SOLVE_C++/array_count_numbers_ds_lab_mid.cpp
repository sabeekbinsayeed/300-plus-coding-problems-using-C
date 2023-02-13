
//https://docs.google.com/document/d/15fTHWRpj7wGxvT3MvdmQHtTDnVhYaaht/edit
// problem 1

#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int ar[n];
for (int i=0;i<n;i++)
{
    cin >> ar[i];
}
int counts=0;
sort (ar,ar+n);

for (int i=0;i<n;i++)
{
    int val=ar[i];
    counts=1;
    for (int j=i+1;j<n;j++)
    {
        if (ar[i]==ar[j])
        {
            counts++;
        }
    }
    cout << ar[i] <<" => " <<counts<< endl;
}


    return 0;
}
