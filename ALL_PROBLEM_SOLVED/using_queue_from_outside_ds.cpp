#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;


void reverse_queue(Queue &q)
{
    stack <int> s;
    int counts=1;
    while (!q.Empty() )
    {
        s.push(q.pop());
        counts++;
    }
    cout << "elements: " << counts<<endl;
int countss=1;

     while (!s.empty() )
    {
        int x=s.top();
        s.pop();
        q.push(x);
    }
}
void reverse_queue_certain(Queue &q,int k)
{
    stack <int> s;
    int counts=0;
cout << "size " << q.Size()<< endl;
    while (1 )
    {

        s.push(q.pop());
        counts++;
        if (counts==k)
        {
            break;
        }
    }




while (!s.empty() )
    {
        int x=s.top();
        s.pop();
        q.push(x);
    }

    for (int i=0;i< q.Size()-k;i++)
    {
        q.push(q.pop());
    }
}


int main()
{
    Queue  q;
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int vals;
        cin >> vals;
        q.push(vals);
    }


    cout << "front value"<< q.Front ()<< " " << "end value "<< q.Back() << endl;


    reverse_queue(q);
 cout << "front value"<< q.Front ()<< " " << "end value "<< q.Back() << endl;
    while (!q.Empty())
    {
        cout << q.pop()<< endl;
    }

    cout << "again starts"<< endl;
    int nn;
    cin >> nn;
    for (int i=0;i<nn;i++)
    {
        int valss;
        cin >> valss;
        q.push(valss);
    }

    cout << "upto which you want to reverse"<< endl;
    int k;
    cin >> k;
    cout << "size " <<q.Size()<< endl;
    reverse_queue_certain(q,k);

     while (!q.Empty())
    {
        cout << q.pop()<< endl;
    }





}

