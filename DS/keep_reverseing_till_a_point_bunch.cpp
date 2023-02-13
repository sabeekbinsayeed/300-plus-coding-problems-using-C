//https://docs.google.com/document/d/1auTB6AK6m5V3ppsFclWYc8KzYMq0oRMM3b8_yW0pv9I/edit

#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;


void reverse_queue_certain(Queue &q,int k)
{
    stack <int> s;
    int counts=0;
    int maincounts=0;
    int realsize=q.Size();
cout << "size " << q.Size()<< endl;
int times=realsize/k;
int left=realsize%k;
cout << "left: "<< left << endl;

for (int z=0;z<times;z++)
{

    counts=0;

    while (1 )
    {

        s.push(q.pop());
        counts++;
        maincounts++;
        if (maincounts==realsize)
        {
            break;
        }
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


}



counts=0;

    while (1 && left)
    {

        s.push(q.pop());
        counts++;
        maincounts++;
        if (maincounts==realsize)
        {
            break;
        }
        if (counts==left)
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


