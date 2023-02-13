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
    if (head==NULL)
    {
        head=newnode;
        head->next=head;
        return ;
    }


     Node* temp=head;


    newnode->next=head;
    head=newnode;

    while (temp->next!=head->next)
    {
temp=temp->next;
    }
    temp->next=head;

}

void insert_at_tail(Node* &head, int value)
{
    Node* newnode=new Node(value);
    if (head==NULL)
    {
        head=newnode;
        head->next=head;
        return ;
    }
    Node* temp=head;

    while (temp->next!=head)
    {
        temp=temp->next;
    }
    newnode->next=head;
    temp->next=newnode;
}



void delete_at_head(Node* &head)
{
    Node* temp=head;
    if (temp==NULL)
    {
        cout << "no value exist nothing to delte"<< endl;

    }
    else if (head->next==head)
    {


        head=NULL;

    }

    else
    {
        while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head->next;
    temp=head;
    head=head->next;
    delete temp;


   if (temp!=NULL)
   {
        head=temp->next;
    delete temp;
   }
   else
   {
       cout << "no value exist"<< endl;
   }

    }



}
void delete_at_tail(Node* &head)
{
    Node* temp=head;
    if (temp==NULL)
    {
        cout << "no value exist nothing to delte"<< endl;

    }
    else if (temp->next==temp)
    {

        head=NULL;

    }

    else
    {

         while (temp->next->next!=head)
    {
        temp=temp->next;
    }
 Node* delnode=temp->next;
 temp->next=head;
 delete delnode;
    }




}

void display(Node* &head)
{
    Node* n=head;
    cout << "printing main "<< endl;
    if (n==NULL)
    {
        cout << "no value exist"<< endl;

    }

    else
    {
        do
    {
        cout << n->value <<" " ;
        n=n->next;
        if(n!=head)
        {
            cout << " -> ";
        }
    }while (n!=head);

    }

}


int lengthOfLinked(Node *&head)
{
    Node *temp=head;
    int counts=0;
   do
    {
        counts++;
        temp=temp->next;

    }   while (temp!=head);
    cout << "length "<< counts<<endl;
    return counts;

}





int main()
{



    Node* head=NULL;
    int values;
    char continues='y';
    int choice;
    cout << " enter 1 for head , 2 for tail , 3 for position insert,0 for ending, 6 for inserting after a value (unique list),7 for deletion at head,8 for delete at tail"<< endl;
    cout << "Enter choice :"<< endl;
    cin >> choice;

    while (choice !=0)
    {


        if (choice==1)
        {
            cout << "Enter the values "<< endl;
            cin >> values;

            insert_head(head,values);
        }
        else if(choice==2)
        {
            cout << "Enter the values "<< endl;
            cin >> values;

            insert_at_tail(head,values);
        }
        else if (choice==3)
        {
            delete_at_head(head);
        }

        else if (choice==4)
        {
            delete_at_tail(head);
        }

        else if (choice==5)
        {
               int result_length=lengthOfLinked(head);
    cout << "length is "<< result_length << endl;


        }





        cout << "Enter choice :"<< endl;
        cin >> choice;
    }


    display(head);
    cout << endl;



    return 0;
}


