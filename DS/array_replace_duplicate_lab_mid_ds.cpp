#include <bits/stdc++.h>
using namespace std;
int main()
{
int m,n;
cin >> m >> n;
int ar[m][n];
for (int i=0;i<m;i++)
{
    for (int j=0;j<n;j++)
    {
        cin >> ar[i][j];
    }

}

for (int i=0;i<m;i++)
{
    for (int j=0;j<n;j++)
    {
        int values=ar[i][j];
        int flag=0;
for (int x=0;x<m;x++)
{
    for (int y=0;y<n;y++)
    {
        if( values==ar[x][y])
        {
            if (flag!=0)
            {
                 ar[x][y]=-1;

            }
            flag=1;


        }

    }
}
    }
}


for (int i=0;i<m;i++)
{
    for (int j=0;j<n;j++)
    {
        cout << ar[i][j]<<" ";
    }
    cout << endl;

}

    return 0;
}
