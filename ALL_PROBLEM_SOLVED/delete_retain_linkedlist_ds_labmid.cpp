//https://docs.google.com/document/d/15fTHWRpj7wGxvT3MvdmQHtTDnVhYaaht/edit
//8
// not done
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

void retain_delete(Node* &head, int first, int second)
{
    Node* temp=head;
    Node* temp2;
    Node* deletenode;
    int counts=1;
    int value;

    while (temp->next!=NULL)
    {
        temp=temp->next;
        counts++;
        cout << "first"<< endl;
 if (counts==first)
        {
            counts=1;
            value=1;
            temp2=temp;
            cout << "second"<< endl;
            /*
  while (value<=second)
            {
                deletenode=temp;
                temp=temp->next;
                value++;
                //delete deletenode;
                            cout << "third"<< endl;
            }
            */
            temp=temp->next;
            temp2->next=temp;
        }
           cout << "forth"<< endl;

    }
}





int main()
{



    Node* head=NULL;
    int values;





    int times;
    cin >> times;
    int first,second;
    cin >> first >> second;
    for (int z=0;z<times;z++)
    {

        cin >> values;

            insert_at_tail(head,values);

    }
  retain_delete(head, first,second);


//reverse_at_point(head, pos);
 display(head);
    return 0;
}



