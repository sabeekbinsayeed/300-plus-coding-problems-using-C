#include <bits/stdc++.h>
using namespace std;
int main()
{

    int cases;
    cin >> cases;
    int j=0;
    while (j< cases)
    {
         int n;
    cin >> n;
int ar[100];
float sum=0;
for (int i=0;i<n;i++)
{
    cin >> ar[i];

}
sort(ar,ar+n);


int m=0;
while (m<n && ar[m]==ar[0])
{
    m++;

}
cout << n-m << endl;

j++;

    }


    return 0;
}
