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
    cout << "printing main "<< endl;
    while (n!=NULL)
    {
        cout << n->value <<" " ;
        n=n->next;
    }
}


void display_reverse(Node* n)
{
    int ar[50];
    int u=0;
    while (n!=NULL)
    {

        ar[u]=n->value;
        u++;
        n=n->next;
    }
    cout << "printing reverse "<< endl;
    for (int i=u-1; i>=0; i--)
    {
        cout << ar[i]<< endl;
    }
}

void display_reverse_recurstion(Node* n)
{


if (n==NULL)
{
    return ;
}

display_reverse_recurstion(n->next);
cout << n->value << endl;

}




int main()
{



    Node* head=NULL;
    int values;
    char continues='y';
    int choice=2;

    while (choice ==1 || choice==2 || choice==3)
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

        else if(choice==3)
        {
            display_reverse(head);
        }
        cout << "Enter choice :"<< endl;
        cin >> choice;
    }


    display(head);
     cout << endl;
    display_reverse(head);
    cout << endl;
    cout << "printing reverse recursion "<< endl;
    display_reverse_recurstion(head);
    cout << endl;
    cout << " testing " << endl;
    cout << head->next->next->value<< endl;
    test(head);
    return 0;
}

