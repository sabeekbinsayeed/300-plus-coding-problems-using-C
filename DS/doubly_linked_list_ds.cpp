#include <bits/stdc++.h>
using namespace std;

class DoublyNode
{

public:
    int value;
    DoublyNode* next;
    DoublyNode* prv;
    DoublyNode(int val)
    {
        value=val;
        next=NULL;
        prv=NULL;
    }

};

void insert_head(DoublyNode* &head, int value)
{
    DoublyNode *newnode=new DoublyNode(value);
    newnode->next=head;
    head->prv=newnode;
    head=newnode;

}

void insert_at_tail(DoublyNode* &head, int value)
{
    DoublyNode* newnode=new DoublyNode(value);
    if (head==NULL)
    {
        head=newnode;
        return ;
    }
    DoublyNode* temp=head;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prv=temp;
}

void change_even_value(DoublyNode* &head)
{
DoublyNode* temp=head;
int counts=1;
while (temp!=NULL)
{
if (counts%2==0)
{
    temp->value=-1;
}
temp=temp->next;
counts++;
}

}
void display(DoublyNode* n)
{
    cout << "printing main "<< endl;
    while (n!=NULL)
    {
        cout << n->value <<" " ;
        n=n->next;
    }
}

void display_reverse(DoublyNode* &head)
{
    DoublyNode* n=head;
    while (n->next!=NULL)
    {

        n=n->next;
    }

    while (n!=NULL)
    {
        cout << n->value << " "<< endl;
        n=n->prv;
    }
}

void insert_after_value(DoublyNode* &head,int search_value, int value)
{

    DoublyNode* temp=head;
    DoublyNode* newnode=new DoublyNode(value);
    if (head==NULL)
    {
        cout << "the value does not exist"<<endl;
    }

    else if (temp->next==NULL)
    {
        temp->next=newnode;
        newnode->prv=temp;
    }

    else
    {
            while (temp->value!=search_value)
    {


        temp=temp->next;
    }
     newnode->next=temp->next;
     newnode->prv=temp;
     temp->next->prv=newnode;
     temp->next=newnode;

    }




}



DoublyNode *reverse_recursive(DoublyNode* &head,int counts,int value)
{

    if (counts==value)
    {
        cout << "head er value jeita paisi"<< head->value << endl;

        return head;
    }
     counts=counts+1;
    cout << "counts: "<< counts << endl;
    DoublyNode* newhead=reverse_recursive(head->next,counts,value);
    head->next->next=head;
    head->next=NULL;
cout << "new head er value" << newhead->value << endl;

    return newhead;
}



int lengthOfLinked(DoublyNode *&head)
{
    DoublyNode *temp=head;
    int counts=0;
    while (temp!=NULL)
    {
        counts++;
        temp=temp->next;
    }
    cout << "length "<< counts<<endl;
    return counts;
}





int main()
{



    DoublyNode* head=NULL;
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
            cout << "inter the value to search"<< endl;
            int search_value;
            cin >> search_value;
            cout << "enter the value to insert"<< endl;
            int value;
            cin>> value;
            insert_after_value(head,search_value, value);
        }

        else if (choice==4)
        {
            change_even_value(head);
            cout << "even value changed"<< endl;
        }

        else if (choice==5)
        {
            cout << "upto which position"<< endl;
            int value;
            cin >> value;
            head=reverse_recursive(head,1,value);
        }







        cout << "Enter choice :"<< endl;
        cin >> choice;
    }


    display(head);
    int lengths=lengthOfLinked(head);
    cout << "lengths: "<< lengths<<endl;;
    cout << "printng reverse"<< endl;
    display_reverse(head);
     cout << endl;

    return 0;
}

