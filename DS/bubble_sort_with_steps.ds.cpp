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

for(int i=0;i<size-1;i++)
{
    cout << "iteration :  "<< i+1 <<  endl;
    for (int j=0;j<size-1;j++)
    {
        cout << " step : "<< j+1 << " "<< endl;
        if (ar[j]>ar[j+1])
        {
            int temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }
        print_array(ar,size);
    }
    print_array(ar,size);
}




//after sort
cout << "after sort"<< endl;
print_array(ar,size);

    return 0;
}


