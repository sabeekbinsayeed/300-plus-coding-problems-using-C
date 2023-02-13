#include <bits/stdc++.h>
using namespace std;
/*
void print_array(int ar[][],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
             cout << ar[i][j]<< " ";
        }

    }
    cout << endl;
}
*/
int main()
{

    int row,col;
    cin >> row>> col;
    int ar[row][col];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
           cin >> ar[i][j];

        }
    }
int m=col-1;
int j=0;
int temp;

for (j=0;j<m;j++,m--)
{

     for (int i=0;i<row;i++)
    {
        temp=ar[i][j];
        ar[i][j]=ar[i][m];
        ar[i][m]=temp;


    }

}


 for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
             cout << ar[i][j]<< " ";
        }
        cout << endl;

    }
    cout << endl;


    cout << endl;
//print_array(ar,row);

    return 0;
}


