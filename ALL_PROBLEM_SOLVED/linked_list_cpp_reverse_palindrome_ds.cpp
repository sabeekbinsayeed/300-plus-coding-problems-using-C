//https://docs.google.com/document/d/1SJPFHK-LJ4UX9il_xyhtTVwAVzbVatgYKf8jYZRE3Gg/edit
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    string value;
    Node* next;
    Node(string val)
    {
        value=value+val;
        next=NULL;
    }

};




void insert_at_tail(Node* &head, string value)
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


string display(Node* n)
{

    string my_string;
    while (n!=NULL)
    {
        cout << n->value <<" " ;
        my_string=my_string+n->value;
        n=n->next;
    }

    cout <<"string : " << my_string << endl;
    return my_string;
}




void reverse_non_recursive(Node* &head)
{

    if (head==NULL )
    {
        cout << "data is empty"<< endl;
        return ;
    }
    Node* prv=NULL;
    Node* current=head;
    Node* nexts=head->next;
    while (1)
    {
        current->next=prv;
        prv=current;
        current=nexts;
        if (current==NULL)
        {
            break;
        }
        nexts=nexts->next;

    }
    head=prv;
}



int main()
{



    Node* head=NULL;

    char continues='y';
    int choice;
    cout << " enter 1 for head , 2 for tail , 3 for position insert,0 for ending, 6 for inserting after a value (unique list),7 for deletion at head,8 for delete at tail"<< endl;
    cout << "Enter choice :"<< endl;
    cin >> choice;

    while (choice !=0)
    {


        if(choice==1)
        {




            string values;
cout << "enter the values " << endl;
cin.ignore();

getline(cin, values);
  insert_at_tail(head,values);

        }

        else if(choice==99)
        {
            //display_reverse(head);
        }




        cout << "Enter choice :"<< endl;
        cin >> choice;
    }


   string check1= display(head);
     cout << endl;
     reverse_non_recursive(head);
    string check2= display(head);
    if (check1==check2)
    {
        cout << "True"<< endl;
    }
    else
    {
        cout << "False"<< endl;
    }

    return 0;
}


