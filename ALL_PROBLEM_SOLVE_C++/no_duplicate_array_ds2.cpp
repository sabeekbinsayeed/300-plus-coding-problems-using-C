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
    int arr[row*col];
    int result=row*col;
    int u=0;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cin >> ar[i][j];
            arr[u]=ar[i][j];
            u++;

        }
    }

    //duplicate check
     for (int i=0; i<result; i++)
    {
       cout << arr[i]<<" ";
    }
    cout << endl;

    for (int i=1; i<result; i++)
    {
        int val=arr[i];
        for (int j=i-1; j>=0; j--)
        {
            if (val==arr[j])
            {
                arr[i]=-1;

            }

        }
    }


    u=0;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
           ar[i][j]= arr[u];
           u++;

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



//print_array(ar,row);

    return 0;
}



