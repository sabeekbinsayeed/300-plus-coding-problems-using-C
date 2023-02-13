#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
int value;
Node* next;
Node* prv;
Node(int val)
{
    value=val;
    next=NULL;
    prv=NULL;
}
};

class Stack{
  public:
    Node* head;
    Node* top;
    int counts=0;


         Stack()
         {
             head=NULL;
             top=NULL;
         }

    void push(int value)
    {
        Node* newnode=new Node(value);
        if (head==NULL)
        {
head=newnode;
top=head;
    cout << "inserted in push upore"<< endl;

return ;
        }
         newnode->prv=top;
        top->next=newnode;
        top=top->next;
        counts++;
        cout << "inserted in push"<< endl;




    }

    void pop()
    {
if (top==NULL)
{
    cout << "no value exist for popping up" << endl;
    cout << " stack underflow" << endl;

}

else if (top==head)
{
     Node* delnode=top;
    top=head=NULL;
    counts--;
    delete delnode;

}


else
{
 Node* delnode=top;
 top=top->prv;
 delnode->prv->next=NULL;

 int values=delnode->value;
 cout <<" values is deleted =" << values<< endl;
 counts--;
 delete delnode;

}

    }

    bool emptys()
    {
        if (top==NULL)
        {
            cout << "empty"<< endl;
            return true;
        }
        else
        {
        cout << "not empty" << endl;
        return false;
        }
    }

    int tops()
    {
        if (top==NULL)
        {
            cout << "no value exist"<< endl;
            return -1;
        }
        else
        {
            cout << top->value << endl;
            return top->value;
        }
    }

    void display()
{
Node* temp=head;
while (temp!=NULL)
{
    cout << temp->value << " ";
    temp=temp->next;
}
}

void sizes()
{
    cout << counts << endl;
}


};

int main()
{
   Stack st;

    int choice ;
    cout << "enter your choice"<< endl;
    cin >> choice;

    while (choice!=0){


        if (choice==1)
        {
            cout <<"enter the value"<< endl;
            int val;
            cin >> val;
            st.push(val);
        }
        else if (choice==2)
        {
            st.pop();
        }
        else if (choice==3)
        {
            int result=st.tops();
            if (result==-1)
            {
                cout << "dont exist"<< endl;
            }
            else
            {
                cout << "top value is " << result << endl;
            }
        }
        else if (choice==4)
        {
            st.emptys();
        }
        else if (choice==5)
        {
            while (!st.emptys())
            {
                st.pop();
            }
        }
cout << "enter your choice"<< endl;
        cin>> choice;

    }


st.display();





    return 0;
}







