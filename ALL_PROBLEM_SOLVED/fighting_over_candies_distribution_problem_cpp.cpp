
//https://atcoder.jp/contests/abc047/tasks/abc047_a?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int flag=0;

  if (a>b && a>c)
  {
      if (a==(b+c))
      {
          flag=1;
      }

  }
  else if (b>a && b>c)
  {
 if (b==(a+c))
      {
          flag=1;
      }
  }
  else
  {
 if (c==(b+a))
      {
          flag=1;
      }
  }

  if (flag==1)
  {
      cout << "Yes"<<endl;
  }
  else
  {
      cout << "No" << endl;
  }

    return 0;
}
