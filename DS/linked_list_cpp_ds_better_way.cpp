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

while (continues=='y')
{
    cout << "Enter the values "<< endl;
cin >> values;
insert_at_tail(head,values);
    cout << "Do you want to continue"<< endl;
    cin >> continues;
}


display(head);
    return 0;
}
