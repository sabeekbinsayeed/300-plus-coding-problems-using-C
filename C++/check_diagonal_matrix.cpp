#include <bits/stdc++.h>
using namespace std;
int main()
{
int row,col;
cin>> row>> col;
int ar[row][col];
int i,j;
for (i=0;i<row;i++)
{
    for (j=0;j<col;j++)
    {
        cin >> ar[i][j];
    }
}
if (row!=col)
{
     cout << "NO"<<endl;
           return 0;
}

for (i=0;i<row;i++)
{
    for (j=0;j<col;j++)
    {
       if (i==j)
       {
           continue;
       }
       if (ar[i][j]!=0)
       {
           cout << "NO"<<endl;
           return 0;
       }
    }

}

cout << "YES"<<endl;

    return 0;
}
