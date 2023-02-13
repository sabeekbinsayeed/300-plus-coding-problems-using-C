//https://docs.google.com/document/d/15fTHWRpj7wGxvT3MvdmQHtTDnVhYaaht/edit
//2
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

int m;
cin >> m;
int arr[m];
for (int i=0;i<m;i++)
{
    cin >> arr[i];
}
int maxs=n>m? n:m;
int result[maxs];
int flag=0;
int z=0;
for (int i=0;i<n;i++)
{
    int val=ar[i];
    flag=0;
    for (int j=0;j<m;j++)
    {

        if (val==arr[j])
        {
flag=1;

        }

    }

     if (flag==0)
        {
            result[z]=val;
            z++;
        }
}

for (int i=0;i<z;i++)
{
    cout << result[i]<<  " ";
}

    return 0;
}

