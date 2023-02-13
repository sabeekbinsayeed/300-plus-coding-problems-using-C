
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j=1;
    string str;
    int cases;
    cin>> cases;
    while (j<=cases)
    {
        cout << "Case "<<j<<":"<<endl;
 int n,m;
 getline(cin, str);
    cin >> n>>m;
    int ar[n];
    for (int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
int a,b;
    for (int i=0;i<m;i++)
    {
cin >> a>>b;
a=a-1;
b=b-1;
int mins=ar[a];
for (int i=a+1;i<=b;i++)
{
    if (ar[i]<mins)
    {
       mins=ar[i];
    }

}
cout << mins<<endl;
    }

        j++;
    }




    return 0;
}
