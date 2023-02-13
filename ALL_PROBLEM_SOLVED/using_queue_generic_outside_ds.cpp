#include <bits/stdc++.h>
#include "Queue_generic.h"
using namespace std;

int main()
{
    Queue <char> q;
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        char vals;
        cin >> vals;
        q.push(vals);
    }

    cout << "front value"<< q.Front ()<< " " << "end value "<< q.Back() << endl;

    while (!q.Empty())
    {
        cout << q.pop()<< endl;
    }



}


