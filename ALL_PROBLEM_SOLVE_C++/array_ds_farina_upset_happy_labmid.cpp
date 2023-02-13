#include <bits/stdc++.h>
using namespace std;
int main()
{
int cases;
cin >> cases;

for (int z=0;z<cases;z++)
{
    int days;
    cin >> days;
  int earning[days];
  int expense [days];






  for (int i=0;i<days;i++)
      {
cin>> earning[i];
      }


      for (int i=0;i<days;i++)
      {
cin >> expense[i];
      }
 int queries;
  cin >> queries;
  int store[days];
  int p=0;
  int sum1=0,sum2=0;
  for (int y=0;y<queries;y++)
  {
      int n;
      cin >> n;
       for (int i=0;i<=n;i++)
      {
sum1=sum1+ earning[i];
      }


      for (int i=0;i<=n;i++)
      {
sum2=sum2+ expense[i];
      }




      int result=sum1-sum2;
      if (result>=0)
      {
        store[p]=1;
        p++;

      }
      else
      {
          store[p]=0;
        p++;

      }

  }
  for (int i=0;i<p;i++)
  {
      cout << store[i]<< " ";
  }
  cout << endl;

}


    return 0;
}
