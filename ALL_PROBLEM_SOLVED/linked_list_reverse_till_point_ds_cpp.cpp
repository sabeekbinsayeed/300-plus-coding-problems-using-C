// lab mid number 7
//https://docs.google.com/document/d/1PtzwJkDff1RtcNoVzERMVfsmZk1mD035X8QzSN2Plrk/edit

#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int value;
    Node* next;
    Node(int val)
    {
        value=val;
        next=NULL;
    }

};

struct Test{
int store[1000];

};



void insert_at_tail(Node* &head, int value)
{
    Node* newnode=new Node(value);
    if (head==NULL)
    {
        head=newnode;
        return ;
    }
    Node* temp=head;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}


void display(Node* n)
{

    while (n!=NULL)
    {
        cout << n->value ;
        n=n->next;
        if (n!=NULL)
        {
            cout << "->";
        }
    }
}




int lengthOfLinked(Node *&head)
{
    Node *temp=head;
    int counts=0;
    while (temp!=NULL)
    {
        counts++;
        temp=temp->next;
    }
    cout << "length "<< counts<<endl;
    return counts;

}




Node *reverse_recursive(Node* &head)
{

    if (head==NULL || head->next==NULL)
    {

        return head;
    }
    Node* newhead=reverse_recursive(head->next);
    head->next->next=head;
    head->next=NULL;


    return newhead;
}


void reverse_at_point(Node* &head ,int position)
{
    Node* temp=head;
    Node* temphead=head;
    Node* my_temp;
    Node* lastnode;
    Node* nullnode;
    int counts=1;
    while (temp->next!=NULL)
    {
if (counts==position)
{
my_temp=temp;
nullnode=my_temp->next;



    }

    temp=temp->next;
    counts++;



}

 lastnode=temp;

 reverse_recursive(head);


      head=my_temp;
      nullnode->next=NULL;
      temphead->next=lastnode;
}


int main()
{



    Node* head=NULL;
    int values;





    int times;
    cin >> times;
    for (int z=0;z<times;z++)
    {

        cin >> values;

            insert_at_tail(head,values);

    }
    int pos;
    cin >> pos;


reverse_at_point(head, pos);
 display(head);
    return 0;
}


