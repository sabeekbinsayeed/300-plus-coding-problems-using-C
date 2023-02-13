//https://docs.google.com/document/d/1B7E3lYI2z4-bf-L9x-Uoo7xhcmA-UaXW/edit
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int ar[n][n];
int arr[n][n];
int new_arr[n][n];
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
    sum=sum+ar[0][i];
}
for (int i=0;i<n;i++)
{
    sum=sum+ar[n-1][i];
}

cout << "sum is " << sum << endl;
int j=n-2;
for (int i=1;i<n-1;i++)
{

    cout <<"starts with i" << i <<" j"<< j<<endl;
if (i<j)
{
    cout << "if "<< endl;
    cout << ar[i][i]<< " "<< ar[i][j]<< endl;

sum=sum+ ar[i][i]+ar[i][j];
j--;
}
else if (i>j)
{
     cout << "if2"<< endl;
    cout << ar[i][j]<< " "<< ar[i][i]<< endl;
sum=sum+ ar[i][j]+ar[i][i];
j--;

}
else if (i==j)
{
     cout << "if equal"<< endl;
    sum=sum+ar[i][j];
    cout << ar[i][j]<< " middle " <<endl;;
    j--;

}

}





cout << sum;


    return 0;
}

