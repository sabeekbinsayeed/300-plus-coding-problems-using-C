#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
int value;
Node* next;
Node* prv;
Node(int val)
{
    value=val;
    next=NULL;
    prv=NULL;
}
};

class Stack{
  public:
    Node* head;
    Node* top;
    int counts=0;


         Stack()
         {
             head=NULL;
             top=NULL;
         }

    void push(int value)
    {
        Node* newnode=new Node(value);
        if (head==NULL)
        {
head=top=newnode;
return ;
        }
         newnode->prv=top;
        top->next=newnode;
        top=top->next;
        counts++;




    }

    void pop()
    {
if (top==head==NULL)
{
    cout << "no value exist for popping up" << endl;
    cout << " stack underflow" << endl;

}

else if (top->next==NULL)
{
    Node* delnode=top;
    top=head=NULL;
    counts--;
    delete delnode;
}
else
{
 Node* delnode=top;
 delnode->prv->next=NULL;
 top=top->prv;
 int values=delnode->value;
 cout <<" values is deleted " << endl;
 counts--;
 delete delnode;

}

    }

    void emptys()
    {
        if (top==NULL)
        {
            cout << "empty"<< endl;
        }
        else
        {
        cout << "not empty" << endl;
        }
    }

    void tops()
    {
        if (top==NULL)
        {
            cout << "no value exist"<< endl;
        }
        else
        {
            cout << top->value << endl;
        }
    }

    void display()
{
Node* temp=head;
while (temp!=NULL)
{
    cout << temp->value << " ";
    temp=temp->next;
}
}

void sizes()
{
    cout << counts << endl;
}


};


int main()
{
    Stack st;
    st.push(5);
    st.push(10);
    st.pop();
    st.display();


    return 0;
}
