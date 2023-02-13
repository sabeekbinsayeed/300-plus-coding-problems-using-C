#include <bits/stdc++.h>
using namespace std;
class treenode {
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



bool isSame(treenode* allnodes, treenode* allnodes2)

{

    string inorder=" ";
       string preorder=" ";
        string postorder=" ";
      inOrder(allnodes,inorder);
       preOrder(allnodes,preorder);
        postOrder(allnodes,postorder);

        cout << preorder << endl;

    string levelorder=" ";




         string inorder2=" ";
       string preorder2=" ";
        string postorder2=" ";
      inOrder(allnodes2,inorder2);
       preOrder(allnodes2,preorder2);
        postOrder(allnodes2,postorder2);
    string levelordera=" ";



        if ( inorder2==inorder && preorder2==preorder && postorder2==postorder )
        {

            return true;
        }
        else
        {

            return false;
        }



}

int main()
{


    treenode* root=new treenode(15);

treenode* a=new treenode(11);



treenode* c=new treenode(8);

treenode* d=new treenode(12);

treenode* e=new treenode(6);

treenode* f=new treenode(9);

treenode* g=new treenode(14);

treenode* h=new treenode(26);

treenode* i=new treenode(20);

treenode* j=new treenode(30);

treenode* k=new treenode(35);


root->leftchild=a;
root->rightchild=h;

a->leftchild=c;
a->rightchild=d;

c->leftchild=e;
c->rightchild=f;

d->rightchild=g;

h->leftchild=i;
h->rightchild=j;

j->rightchild=k;


 treenode* root1=new treenode(1);

treenode* a1=new treenode(2);

treenode* b1=new treenode(3);


root1->leftchild=a1;
root1->rightchild=b1;


      bool res=isSame(root,root1);

    if (res==true)
    {
 cout << "These two binary trees are the same."<< endl;
    }
    else
    {
 cout << "These two binary trees are not the same."<< endl;
    }





    return 0;
}
