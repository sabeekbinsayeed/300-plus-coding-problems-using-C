//https://docs.google.com/document/d/15fTHWRpj7wGxvT3MvdmQHtTDnVhYaaht/edit
//8
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

void even_replace(Node* &head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        int val=temp->value;
        if (val%2==0)
        {
            temp->value=-1;
        }
        temp=temp->next;
    }
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
  //retain_delete(head, first,second);


//reverse_at_point(head, pos);
even_replace(head);
 display(head);
    return 0;
}





