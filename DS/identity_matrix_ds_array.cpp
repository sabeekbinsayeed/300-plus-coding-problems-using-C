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

    int row;
    cin >> row;
    int ar[row][row];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<row;j++)
        {
            if (i==j)
            {
                ar[i][j]=1;
            }
            else
            {
                 ar[i][j]=0;
            }

        }
    }


     for (int i=0;i<row;i++)
    {
        for (int j=0;j<row;j++)
        {
             cout << ar[i][j]<< " ";
        }
        cout << endl;

    }
    cout << endl;
//print_array(ar,row);

    return 0;
}

