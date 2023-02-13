#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;


void reverse_queue(Queue &q)
{
    stack <int> s;

    while (!q.Empty() )
    {
        s.push(q.pop());

    }



     while (!s.empty() )
    {
        int x=s.top();
        s.pop();
        q.push(x);
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







}



