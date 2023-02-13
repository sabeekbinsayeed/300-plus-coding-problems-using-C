#include <bits/stdc++.h>
using namespace std;
int main()
{
int sizes;
cin >> sizes;
int ar[sizes];
for (int i=0;i<sizes;i++)
{
    cin >> ar[i];
}

int maxs=INT_MIN;
for (int i=0;i<sizes;i++)
{
    if (ar[i]>maxs)
    {
        maxs=ar[i];
    }
}


int counting[maxs+1];

for (int i=0;i<=maxs;i++)
{
    counting[i]=0;
}

for (int i=0;i<sizes;i++)
{
    int val=ar[i];
    counting[val]=counting[val]+1;
}

for (int i=1;i<=maxs;i++)
{
    counting[i]=counting[i-1]+counting[i];
}
int finals[sizes];
int k;
for (int i=0;i<sizes;i++)
{
    int values=ar[i];

    counting[values]=counting[values]-1;
    k=counting[values];
    finals[k]=ar[i];


}

for (int i=0;i<sizes;i++)
{
    cout << finals[i]<<" " ;
}


    return 0;
}
