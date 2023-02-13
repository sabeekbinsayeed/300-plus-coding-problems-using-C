//1
//https://docs.google.com/document/d/1B7E3lYI2z4-bf-L9x-Uoo7xhcmA-UaXW/edit

#include <bits/stdc++.h>
using namespace std;
int main()
{

int value;
cin >> value;
int n=sqrt(value);
int arr[value];
for (int i=0;i<value;i++)
{
    cin >> arr[i];
}
int u=0;
int ar[n][n];
for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
ar[i][j]=arr[u];
u++;
    }
}


for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
cout << ar[i][j]<<" ";
    }
    cout << endl;
}


    return 0;
}
