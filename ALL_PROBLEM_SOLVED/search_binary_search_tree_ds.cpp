#include <bits/stdc++.h>
using namespace std;
class treenode
{
public:
    int data;
    treenode* leftchild;
    treenode* rightchild;
    treenode(int d)
    {
        data=d;
        leftchild=NULL;
        rightchild=NULL;
    }

};

void spaceprint(int level)
{
    for (int i=0; i<level; i++)
    {
        cout <<"   ";
    }

}


void inOrder (treenode* root, string &chk)
{
    if (root==NULL)
    {
        return ;
    }

    inOrder (root->leftchild,chk);

    stringstream ss;
    ss << root->data;
    string s=ss.str();
    chk += s;
    inOrder(root->rightchild,chk);


}
void preOrder (treenode* root, string &chk)
{
    if (root==NULL)
    {
        return ;
    }
    stringstream ss;
    ss << root->data;
    string s=ss.str();



    chk += s;

    preOrder (root->leftchild,chk);



    preOrder(root->rightchild,chk);


}

void postOrder (treenode* root, string &chk)
{
    if (root==NULL)
    {
        return ;
    }

    postOrder (root->leftchild,chk);


    postOrder(root->rightchild,chk);

    stringstream ss;
    ss << root->data;
    string s=ss.str();
    chk += s;


}


void printtree(treenode* root, int level)
{
    if (root==NULL)
    {
        return ;
    }

    if (root ->leftchild==NULL && root->rightchild==NULL )
    {
        cout << root->data << endl;
        return ;
    }
    else
    {
        cout << endl;
        spaceprint(level);
        cout << "Root: "<<root->data << endl;
    }

    if (root->leftchild!=NULL)
    {
        spaceprint(level);
        cout << "Left: ";
        printtree(root->leftchild,level+1);
    }

    if (root->rightchild!=NULL)
    {
        spaceprint(level);
        cout << "Right: ";
        printtree(root->rightchild,level+1);
    }





}
treenode* insertion_bst(treenode* root,int value)
{
    treenode* newnode=new treenode(value);
    if (root==NULL)
    {
        root=newnode;
        return root;
    }

    if (value < root->data)
    {
        root->leftchild=insertion_bst(root->leftchild,value);

    }
    else if (value > root->data)
    {
        root->rightchild=insertion_bst(root->rightchild,value);
    }

    return root;

}

treenode* search_bst(treenode* root, int value)
{
    if (root==NULL) return NULL;
    cout << "data: "<< root->data << endl;
    if (root->data==value)
    {
        return root;
    }
    else if (value < root->data )
    {
        search_bst(root->leftchild,value);
    }
    else
    {

        search_bst(root->rightchild,value);
    }


}

treenode* inordersuccessor(root)
{

    treenode* current=root;
    while( current->leftchild!=NULL)
    {
        current=current->leftchild;
    }
    return current;
}

treenode* delete_bst(treenode* root, int value)
{

    if (value < root->data)
    {
        root->leftchild=delete_bst(root->leftchild,value);
    }
    else
    {

        root->rightchild=delete_bst(root->rightchild,value);
    }
    else
    {

        if (root->leftchild==NULL)
        {
            treenode* temp=root->rightchild;
            free(root);
            return temp;

        }
        else  if (root->rightchild==NULL)
        {
            treenode* temp=root->leftchild;
            free(root);
            return temp;

        }
        else
        {

            treenode* temp=inordersuccessor(root->right);
            root->data=temp->data;
        }
    }
}


int main()
{
    int n;
    cin >> n;
    treenode* root=NULL;

    for (int i=0; i<n; i++)
    {
        int value;
        cin>> value;

        root=insertion_bst(root,value);



    }
    string inorder="";
    inOrder(root,inorder);
    cout <<inorder << endl;

    int key;
    cin >> key;
    if (search_bst(root,key)==NULL)
    {

        cout << "value does not exist"<< endl;
    }
    else
    {

        cout <<" value exist "<< endl;
    }

    return 0;
}


