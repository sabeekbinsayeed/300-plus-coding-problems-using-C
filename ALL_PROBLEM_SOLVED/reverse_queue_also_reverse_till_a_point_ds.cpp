// https://docs.google.com/document/d/1auTB6AK6m5V3ppsFclWYc8KzYMq0oRMM3b8_yW0pv9I/edit

#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;



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


