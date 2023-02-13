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

void insert_at_specific(Node* &head, int position,int value)
{
    int counts=0;
    Node* temp=head;
    while (counts<(position-2))
    {
        counts++;
        temp=temp->next;

    }
    Node* newnode=new Node(value);
    newnode->next=temp->next;
    temp->next=newnode;
}
void search_duplicate(Node* &head, int key)
{
    Node *temp=head;
    int sizes=lengthOfLinked(head);
    int store[sizes+1];
    int k=1;
    int counts=1;
    int flag=0;
    while (temp!=NULL)
    {
        if(temp->value==key)
        {
store[k]=counts;
k++;
flag=1;

        }
        temp=temp->next;
        counts++;
    }

    if (flag==0)
    {
        cout << "not found"<< endl;

    }
    else
    {
        store[0]=k;
        for (int i=1;i<k;i++)
        {
            cout << "positinon   :  "<< store[i]<<endl;
        }

    }



}



Test search_duplicate_return(Node* &head, int key)
{
    Node *temp=head;
Test t;
    int k=1;
    int counts=1;

    while (temp!=NULL)
    {
        if(temp->value==key)
        {
t.store[k]=counts;
k++;


        }
        temp=temp->next;
        counts++;
    }



t.store[0]=k;

return t;

}
int search_value(Node* &head, int key)
{

    Node* temp=head;
    int counts=0;
    int flag=0;
    while(temp!=NULL)
    {
        if (temp->value==key)
        {
            counts++;
            flag=1;
            return counts;
            break;
        }
        temp=temp->next;
        counts++;
    }
    if (flag==0)
    {
        return -1;
    }
    else return counts;
    /*
    Node* temp=head;
    if (head==NULL)
    {
        return -1;
    }
    int counts=1;

    while (temp->value!=key)
    {
        if(temp->next==NULL)
        {
            return -1;
        }
        counts++;
        temp=temp->next;

    }
    return counts;
    */
}

void insert_after_value_uniquevalue(Node* &head,int searchs,int value)
{
    int position=search_value(head,searchs);
    insert_at_specific(head,position+1,value);
}

void delete_at_head(Node* &head)
{
    Node* temp=head;
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

void delete_at_tail(Node* &head)
{
    Node* temp=head;
    if (temp==NULL)
    {
        cout << "no value exist";
    }
    else if (temp->next==NULL)
    {
head=NULL;

    }

    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;

}

void delete_at_position(Node* &head, int position)
{
    Node* temp=head;
    int counts=0;

    if (temp==NULL)
    {
        cout << "no value exist";
    }

    else if (position==1)
    {

       delete_at_head(head);
    }
    else
    {
         while (temp!=NULL)
    {

        if (counts==position-2)
        {
            Node* deletenode=temp->next;
            temp->next=temp->next->next;
            delete(deletenode);
        }
        temp=temp->next;
        counts=counts+1;
    }
    }


}

void delete_specific_value_unique(Node* &head,int key)
{
    Node *temp=head;

    if (temp==NULL)
    {
        cout << "nothing to delete"<< endl;
    }
    else if (temp->value==key)
    {
        Node* duplicate=temp;
        temp=temp->next;
        delete duplicate;
        head=temp;
    }

    else
    {

         while (temp->next->value!=key)
    {
        temp=temp->next;
    }
    Node* deletenode=temp->next;

    temp->next=temp->next->next;

    delete deletenode;

    }



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


void  middleNodeOfList(Node* &head) {

    Node* slow = head;
    Node* fast = head;
    if (head==NULL)
    {
        cout <<"no value of head" << endl;
        return ;
    }
//  while (fast->next != NULL && fast->next->next!=NULL) {  use it when 1 2 3 4 5 6 and mid is 3, but if wanna have mid as 4 then fast!=null
    while (fast->next != NULL && fast!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        // Add Logic for problem at hand
        // ...
    }
    cout << "middle value is " << slow->value << endl;
    // Add Logic for problem at hand
    // ...
}

void make_cycle(Node* head, int position)
{

    Node* temp=head;
    Node* store;
    int counts=1;
    while (temp->next!=NULL)
    {
        if (counts==position)
        {
            store=temp;
        }
        temp=temp->next;
        counts++;
    }
    temp->next=store;
}

bool detect_cycle (Node* head)
{
    Node* fast=head;
    Node* slow=head;

     if (head==NULL)
    {
        cout <<"no value of head" << endl;
        return false ;
    }
//  while (fast->next != NULL && fast->next->next!=NULL) {  use it when 1 2 3 4 5 6 and mid is 3, but if wanna have mid as 4 then fast!=null
    while (fast->next != NULL && fast!=NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(fast->next== slow->next)
        {
            return true;
        }
        // Add Logic for problem at hand
        // ...
    }

}
void remove_cycle (Node* head)
{
    Node* fast=head;
    Node* slow=head;

     if (head==NULL)
    {
        cout <<"no value of head" << endl;
        return  ;
    }

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(fast!=slow);
/*
    while (fast->next != NULL && fast!=NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(fast->next== slow->next)
        {
           break;
        }
        // Add Logic for problem at hand
        // ...
    }
    slow=fast;
    fast=head;

    */
    fast=head;
    while (fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;

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

        else if(choice==99)
        {
            display_reverse(head);
        }
        else if (choice ==3)
        {
            cout << "enter position and values"<< endl;
            int position,values;
            cin >> position >> values;
            insert_at_specific(head, position,values);

        }

        else if (choice==4)
        {
            cout << "enter the value to search";
            int value;
            cin >> value;
           int result= search_value(head,value);
           if(result==-1)
           {
printf("No data found\n");
           }
           else
           {
               cout << "found at position: " << result << endl;

           }

        }

         else if (choice==5)
        {
            cout << "enter the value to search"<< endl;
            int value;
            cin >> value;
          // search_duplicate(head,value);
          Test t;
          t=search_duplicate_return(head,value);

          if (t.store[0]==1)
          {
              cout << "no value found"<< endl;

          }
          else
          {

              int sizes=t.store[0];
              for (int i=0;i<sizes;i++)
              {
                  cout << t.store[i] << " ";
              }
              cout << endl;
          }

        }
        else if (choice==6)
        {
            int searchs,values;
            cout << "enter the value to search and you want to insert"<<endl;
            cin >> searchs >> values;
            insert_after_value_uniquevalue(head,searchs,values);

        }

        else if (choice==7)
        {

            delete_at_head(head);

        }

        else if (choice==8)
        {
            delete_at_tail(head);
        }

        else if (choice==9)
        {
            int position;
            cout << "psotin "<< endl;
            cin >> position;
            delete_at_position(head,position);
        }

        else if (choice==10)
        {
            int value;
            cin>> value;
            delete_specific_value_unique(head,value);
        }


        else if (choice==11)
        {
            // duplicate thakle oitar por inserr kora
            // jotot jaegae 2 thakbe oitar por 99 hobe

             cout << "enter the value to insert"<< endl;
            int value;
            cin >> value;

            int search_value;
            cout << "enter the value after which you want to insert"<< endl;
            cin>> search_value;
          // search_duplicate(head,value);
          Test t;
          t=search_duplicate_return(head,search_value);

          if (t.store[0]==1)
          {
              cout << "no value found"<< endl;

          }
          else
          {

              int sizes=t.store[0];
              int countss=0;
              for (int i=1;i<sizes;i++)
              {
                  int my_val=t.store[i]+countss;
                  cout << "my_val position "<< my_val << " : " ;
                  insert_at_specific(head,my_val+1,value);
                  countss++;

              }


              cout << endl;
          }
        }


           else if (choice==12)
        {
            // deleting at duplicate position

             cout << "enter the value to delete"<< endl;
            int search_value;
            cin >> search_value;


          Test t;
          t=search_duplicate_return(head,search_value);

          if (t.store[0]==1)
          {
              cout << "no value found"<< endl;

          }
          else
          {

              int sizes=t.store[0];
              int countss=0;
              for (int i=1;i<sizes;i++)
              {
                  int my_val=t.store[i]-countss;
                  cout << "my_val position "<< my_val << " : " ;
                  delete_at_position(head,my_val);
                  countss++;

              }


              cout << endl;
          }
        }

        else if (choice==13)
        {
            reverse_non_recursive(head);
            cout << "done" << endl;
        }


        else if (choice==14)
        {
           head= reverse_recursive(head);
            cout << "done" << endl;
        }
        else if (choice==15)
        {
            int position;
            cout <<" enter the position to make circle" <<endl;
            cin >> position;
            make_cycle(head, position);
        }

        else if (choice==16)
        {
            bool detect=detect_cycle(head);
            if (detect==true)
            {
                cout << "cycle exist"<< endl;
            }
            else
            {
                cout << "no cycle exist"<< endl;
            }
        }


         else if (choice==17)
        {
            bool detect=detect_cycle(head);
            if (detect==true)
            {
                cout << "cycle exist"<< endl;
                remove_cycle(head);
                cout << "cycle removed"<< endl;
            }
            else
            {
                cout << "no cycle exist"<< endl;
            }
        }




        cout << "Enter choice :"<< endl;
        cin >> choice;
    }


    display(head);
     cout << endl;
     cout << "dispalyaing reverse"<<endl;
    display_reverse(head);
    cout << endl;


    cout << endl;

   lengthOfLinked(head);
   middleNodeOfList(head);
    return 0;
}

