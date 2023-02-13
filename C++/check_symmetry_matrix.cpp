
#include <bits/stdc++.h>
using namespace std;
int main()
{
int row,col;
cin>> row>> col;
int ar[row][col];
int arr[row][col];
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
     arr[i][j]=ar[j][i];
    }
    cout << endl;

}

cout << " the new matrix formed : "<<endl;

for (i=0;i<row;i++)
{
    for (j=0;j<col;j++)
    {
      cout << arr[i][j]<< " ";
    }
    cout << endl;

}
int flag=1;
for (i=0;i<row;i++)
{
    for (j=0;j<col;j++)
    {
     if (ar[i][j]!=arr[i][j])
     {
         flag=0;
         break;
     }
    }


}
if (flag==1)
{
    cout << "symmetric";
}
else
{
    cout << "not symmetric";
}

    return 0;
}


