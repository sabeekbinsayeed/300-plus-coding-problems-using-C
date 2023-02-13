#include <bits/stdc++.h>
using namespace std;

void print_array(int ar[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout << ar[i]<< " ";
    }
    cout << endl;
}
int main()
{

    int row;
    cin >> row;
    int ar[row][row];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<row;j++)
        {
            cin >> ar[i][j];
        }
    }
    int sum=0;

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<row;j++)
        {
           if (i==j)
           {
               cout << ar[i][j]<<" ";
               sum=sum+ar[i][j];
           }
        }

    }
       cout << endl;
int j=row-1;
    for (int i=0;i<=row-1;i++)
    {
                       cout << ar[i][j]<<" ";
        sum=sum+ ar[i][j];
        j--;
    }
    cout << endl;

cout << sum << endl;

    return 0;
}
