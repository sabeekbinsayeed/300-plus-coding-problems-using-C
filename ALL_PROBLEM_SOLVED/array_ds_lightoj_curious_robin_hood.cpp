#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    int f=0;
    while (f<cases)
    {
        cout << "Case "<<cases<< ":"<<endl;
int n,m;

cin >> n >> m;
int ar[n];

for (int i=0;i<n;i++)
{
    cin >> ar[i];
}
int a,b,c;
for (int i=0;i<m;i++)
{

cin >>a;

if (a==1)
{
    cin>>b;
    cout << ar[b]<< endl;
ar[b]=0;

}
else if (a==2)
{
    cin>>b>>c;
ar[b]=ar[b]+ 4;
}

else if(a==3)
{
     cin>>b>>c;
    int sum=0;
    for (int i=b;i<=c;i++)
    {
        sum=sum+ar[i];
    }
cout << sum << endl;
}


}

    f++;
    }



    return 0;
}
