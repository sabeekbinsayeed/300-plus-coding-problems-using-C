//2
//https://docs.google.com/document/d/1B7E3lYI2z4-bf-L9x-Uoo7xhcmA-UaXW/edit

#include <bits/stdc++.h>
using namespace std;
int main()
{

int n=3;
int ar[n][n];
int arr[n][n];
int new_arr[n][n];
for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
cin >> ar[i][j];
    }
}

for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
cin >> arr[i][j];
    }
}



for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
new_arr[i][j]=0;
for (int k=0;k<n;k++)
{
new_arr[i][j]+=  ar[i][k]*arr[k][j];
}
    }
    cout << endl;
}







for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
cout << new_arr[i][j]<< " ";
    }
    cout << endl;
}




    return 0;
}

