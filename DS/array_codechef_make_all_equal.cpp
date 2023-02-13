#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
int j=1;
int store[cases];
int k=0;
    while (j<=cases)
    {

        int n;
int inequal=0;
cin >> n;
int ar[n];
for (int i=0;i<n;i++)
{
    cin >> ar[i];
}
int values=ar[0];

for (int i=1;i<n;i++)

{
    if (values != ar[i])
    {
        inequal++;
    }

}

store[k]=inequal;
k++;



       j++;
    }


for (int i=0;i<k;i++)
{
    cout << store[i] << " " << endl;
}





    return 0;
}
