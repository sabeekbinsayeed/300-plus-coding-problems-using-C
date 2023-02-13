#include <bits/stdc++.h>
using namespace std;

void print_array(int ar[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout << ar[i]<< " ";
    }
    cout << endl;
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


//before sort
cout <<"before sort" << endl;
print_array(ar,size);
//bubble sort
int flag;
int key;
int j;
for(int i=1;i<size;i++)
{
    key=ar[i];
    j=i-1;
    while (ar[j]>key && j>=0)
    {
        ar[j+1]=ar[j];
        j--;
    }
    ar[j+1]=key;


}




//after sort
cout << "after sort"<< endl;
print_array(ar,size);

    return 0;
}




