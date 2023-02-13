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

    //duplicate check

     for (int i=0;i<row;i++){
        for (int j=0;j<col;j++)
        {
           int value=ar[i][j];

           for (int m=i;m>=0;m--)
           {
               if (i==0 && (j-1)<0)
                continue;

               for (int x=j-1;x>=0;x--)
               {
                   if (value==ar[m][x])
                   {
                       ar[i][j]=-1;

                   }

               }
           }

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


