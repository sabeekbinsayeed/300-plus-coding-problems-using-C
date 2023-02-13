//9
//2 10 1 5 4 8 3 8 7

#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{

    int *temp;
    temp=a;
    a=b;
    b=temp;
}




void heapify(int ar[],int n,int current)
{
int largest=current;
int leftchild= 2* current +1;
int rightchild=2* current +2;

if (leftchild<n && ar[leftchild]>ar[largest])
{
largest=leftchild;
}

if (rightchild < n && ar[rightchild]>ar[largest])
{
largest=rightchild;
}

if (largest!= current)
{
    swap(ar[largest],ar[current]);
    heapify(ar,n,largest);
}


}

void heapsort(int ar[],int size)
{

    for (int i=size-1;i>=0;i--)
    {
swap(ar[i],ar[0]);
heapify(ar,i,0);
    }
}


void print(int ar[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout << ar[i]<<" " << endl;
    }
    cout << endl;
}

int main()
{

int n;
cin >> n;
int ar[n];
for (int i=0;i< n;i++)
{
    cin >> ar[i];
}

int nonleafstart=(n/2)-1;

cout << "before "<<endl;
print(ar,n);
for (int i=nonleafstart;i>=0;i--)
{

    heapify(ar, n,i);
}
cout << "after "<< endl;

print(ar,n);

heapsort(ar,n);
cout << "sorint "<< endl;

print(ar,n);

    return 0;
}
