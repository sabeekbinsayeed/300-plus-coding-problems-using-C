// problem  answer to mile
//1 2 2
// 3 3 33
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3];
    for (int i=0;i<3;i++)
    {
        cin >> ar[i];
    }
    int value=ar[0];
    int inequal=0;
int flag;
int j;
    for (int i=0;i<3;i++)
    {
       int values=ar[i];
       flag=0;
       for (j=i+1;j<3;j++)
       {
           if (values==ar[j])
           {
               flag=1;
           }
       }
       if (flag==0)
       {
           inequal++;
       }
    }

cout << inequal << endl;;
    return 0;
}
