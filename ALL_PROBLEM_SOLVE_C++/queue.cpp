#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
int value;
Node* next;

    Node(int val)
    {
        value=val;
        next=NULL;
    }


};

class Queue {
public:
Node* front;
Node* rear;

    Queue()
    {
        front=NULL;
        rear=NULL;
    }

    void push(int val)
    {
        Node* newnode=new Node(val);
        if (front==NULL)
        {
            front=newnode;
            rear=newnode;
            return ;

        }

        rear->next=newnode;
        rear=rear->next;
    }

    int pop()
    {
        int check=-1;
        if (rear==NULL)
        {
            cout << "queue underflow"<< endl;
            return check;
        }
        Node* delnode=front;
        front=front->next;
        if (front==NULL)
        {
            rear=NULL;
        }
        check=delnode->value;
        delete delnode;
        return check;
    }

    int Front()
    {
        int check=front->value;
        return check;
    }

    int Back()
    {
        int check=rear->value;
        return check;
    }

     bool Empty(){
         bool result;
    if (front==NULL && rear==NULL)
    {
        result=true;
    }
    else
    {
        result=false;

    }
    return result;


    }



};
int main()
{
    Queue q;
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int vals;
        cin >> vals;
        q.push(vals);
    }

    reverse_queue(q);

    cout << "front value"<< q.Front ()<< " " << "end value "<< q.Back() << endl;

    while (!q.Empty())
    {
        cout << q.pop()<< endl;
    }



}
