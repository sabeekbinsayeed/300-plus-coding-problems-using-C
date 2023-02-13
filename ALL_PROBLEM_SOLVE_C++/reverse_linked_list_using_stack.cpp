// C/C++ program to reverse linked list
// using stack

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node* next;
};

/* Given a reference (pointer to pointer) to
   the head of a list and an int, push a new
   node on the front of the list. */
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to reverse linked list
Node *reverseList(Node* head)
{
    // Stack to store elements of list
   stack <Node* > st;
   Node* temp=head;
   while (temp->next!=NULL)
   {
       st.push(temp);
       temp=temp->next;
   }
   head=temp;

   while (!st.empty())
   {
       temp->next=st.top();
       st.pop();
       temp=temp->next;
   }
   temp->next=NULL;
   return head;
}

// Function to print the Linked list
void printList(Node* head)
{
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

// Driver Code
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    /* Use push() to construct below list
    1->2->3->4->5 */
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    head = reverseList(head);

    printList(head);

    return 0;
}
