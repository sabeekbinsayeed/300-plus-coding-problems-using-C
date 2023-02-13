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

    void insert_head(Node* &head, int value)
    {
        Node *newnode=new Node(value);
        newnode->next=head;
        head=newnode;

    }

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
          cout << n->value <<" " ;
          n=n->next;
      }
  }
int main()
{



Node* head=NULL;
int values;
char continues='y';
int choice=2;

while (choice ==1 || choice==2)
{
    cout << "Enter the values "<< endl;
cin >> values;

cout << " enter 1 for head , 2 for tail , 3 for end"<< endl;
if (choice==1)
{
    insert_head(head,values);
}
else if(choice==2)
{
    insert_at_tail(head,values);
}
    cout << "Enter choice :"<< endl;
    cin >> choice;
}


display(head);
    return 0;
}
