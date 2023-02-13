#include <bits/stdc++.h>
using namespace std;
int main()
{
int size;
cin>> size;
int ar[size];
for (int i=0;i<size;i++)
{
    cin >> ar[i];
}

int number;
cout << "enter the number to search" << endl;
cin >> number;
int flag=0;
for (int i=0;i<size;i++)
{
    if(number==ar[i])
    {
        cout << "index: "<< i<< " position : "<<i+1<< endl;
        flag=1;
    }
}

if (flag==0)
{
    cout << "not found";
}
    return 0;
}
