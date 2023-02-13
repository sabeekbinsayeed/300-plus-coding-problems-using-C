#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* next;
};

void display(Node *n)
{
    while (n!=NULL)
    {
        cout << n->value<<" " ;
        n=n->next;
    }
}
int main()
{
Node* head=new Node();
Node* second=new Node();
Node* third=new Node();
Node* forth=new Node();

head->value=1;
head->next=second;

second->value=2;
second->next=third;

third->value=3;
third->next=forth;

forth->value=4;
forth->next=NULL;

display(head);

    return 0;
}
