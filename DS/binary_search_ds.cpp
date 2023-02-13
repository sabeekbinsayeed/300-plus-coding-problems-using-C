#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ar[],int x,int low,int high)
{
int mid=(high+low)/2;
if (low<= mid )
{
    if (ar[mid]==x)
{
    return mid;

}
else if (x>ar[mid])
{
    return binarySearch(ar,x,mid+1,high);
}
else
{
binarySearch(ar,x,mid+1,high);
}

}
else
{
    return -1;
}




}


int main()
{
int size;
cin>> size;
int ar[size];
for (int i=0;i<size;i++)
{
    cin >> ar[i];
}

int number;
cout << "enter the number to search" << endl;
cin >> number;


int index=binarySearch(ar,number, 0,size-1);
if (index==-1)
{
    cout <<"not found"<< endl;
}
else
{
    cout << "index: "<< index<< " position : "<< index+1<<endl;
}

    return 0;
}

