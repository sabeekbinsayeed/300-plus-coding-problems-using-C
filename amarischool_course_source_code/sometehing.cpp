//problem answer to mile

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
int j=1;
int store[cases];
int k=0;
    while (j<=cases)
    {

        int n;
int inequal=0;
cin >> n;
int ar[n];
for (int i=0;i<n;i++)
{
    cin >> ar[i];
}

//counter start
int  m=0;
  int val;
    int counter[1001]={0};
 while (m<n)
    {

        val=ar[m];
        counter[val]=counter[val]+1;
        m++;

    }




int maxs=counter[0];
int searching_number;

    for (int i=1;i<1001;i++)
    {
if (counter[i]>maxs)
{
    maxs=counter[i];
    searching_number=i;
}
    }



int values=searching_number;


//counter ends

for (int i=0;i<n;i++)

{
    if (values != ar[i])
    {
        inequal++;
    }

}

store[k]=inequal;


k++;



       j++;
    }

int i;
for ( i=0;i<k-1;i++)
{
    cout << store[i] << endl;
}
cout << store[i];




    return 0;
}
