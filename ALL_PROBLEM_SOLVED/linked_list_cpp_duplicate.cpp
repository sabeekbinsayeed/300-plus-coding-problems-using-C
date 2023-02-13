
//https://docs.google.com/document/d/1SJPFHK-LJ4UX9il_xyhtTVwAVzbVatgYKf8jYZRE3Gg/edit
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


void display(Node* &head)
{
    cout << "printing main "<< endl;
    Node* temp=head;

    while (temp!=NULL)
    {
        cout << temp->value <<" " ;
        temp=temp->next;
    }
}

void remove_duplicate_less_complex(Node* &head)
{
    Node* temp=head;
    Node* delnode;
    while (temp->next!=NULL)
    {
          if (temp->next->value==temp->value)
    {
        delnode=temp->next;
        temp->next=temp->next->next;

        delete delnode;

    }

        temp=temp->next;
    }


}

void create_circle_position(Node* &head, int position)
{
    int counts=1;
    Node* temp=head;
    Node* delnode;
    Node* temphead=head;
    while (temp->next!=NULL)
    {
        if (position==counts)
    {
        delnode=temp;
        temp=temp->next;
        delnode->next=NULL;
        cout << "null korlam value : " << delnode->value << endl;
        head=temp;
        counts++;

    }
    else
    {
        temp=temp->next;
    counts++;

    }




    }
     temp->next=temphead;

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



         if(choice==1)
        {
            cout << "Enter the values "<< endl;
        cin >> values;

            insert_at_tail(head,values);
        }

        if (choice==2)
        {
            int position;
            cout << "position "<< endl;
            cin>>position;
            create_circle_position(head,position);

        }




        cout << "Enter choice :"<< endl;
        cin >> choice;
    }

//remove_duplicate_less_complex(head);


    display(head);

    return 0;
}

