//https://docs.google.com/document/d/15fTHWRpj7wGxvT3MvdmQHtTDnVhYaaht/edit
// problem 5
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
int mid=n/2;
int ar[n][n];
if (n%2!=0)
{
    mid=mid+1;
}
mid=mid-1;// for index balancefjfjfj
for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
        cin >> ar[i][j];
    }
}
int sum=0;
    for (int i=0;i<n;i++)
    {
        if (i==0)
        {
           // cout << "dhuke prothom row"<< endl;

            // first line

            for (int j=0;j<=mid;j++)
            {
                sum=sum+ar[i][j];
               // cout <<"first: " <<  ar[i][j]<<endl;

            }
            sum=sum+ar[i][n-1];
            //cout << "first : "<< ar[i][n-1]<<endl;

        }
        else if (i==n-1)
        {

           // cout << "dhuke last"<< endl;

            // last
             for (int j=mid;j<n;j++)
            {
                sum=sum+ar[i][j];
               // cout <<"last: " <<  ar[i][j]<<endl;

            }
            sum=sum+ar[i][0];
           // cout << "last : "<< ar[i][0]<<endl;

        }
        else if (i==mid)
        {
             // cout << "dhuke mid"<< endl;

               for (int j=0;j<n;j++)
             {
                 sum=sum+ar[i][j];
                // cout << "mid: "<< ar[i][j]<< endl;
             }

            //middle
        }
        else if (i<mid)
        {

             //cout << "dhuke first half"<< endl;
             //cout <<"fist half" <<  ar[i][mid]<< endl;
            // cout <<"first half" <<  ar[i][n-1]<<endl;
             sum=sum+ar[i][mid]+ar[i][n-1];


            //first half
        }
        else if(i>mid)
        {
            //cout << "dhuke second half"<< endl;

          //   cout <<"second half: " <<  ar[i][mid]<< endl;
           //  cout <<"second half" << ar[i][0]<<endl;
             sum=sum+ar[i][mid]+ar[i][0];


            // second half
        }

    }

      cout <<"sum is " <<  sum;

}
