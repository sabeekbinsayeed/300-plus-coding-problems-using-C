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

void spaceprint(int level)
{
    for (int i=0;i<level;i++)
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


int main()
{
    int n;
    cin >> n;
    treenode* allnodes[n];
    for (int i=0;i< n;i++)
    {
        allnodes[i]=new treenode(-1);

    }

     for (int i=0;i< n;i++)
    {
      int value, left, right;
      cin >> value >> left >> right;
      allnodes[i]->data=value;

      if (left > n-1 || right > n-1)
      {
          cout <<" invalid index " << endl;
          break;
      }

      if (left !=-1)
      {
allnodes[i]->leftchild= allnodes[left];
      }


      if (right !=-1)
      {
allnodes[i]->rightchild= allnodes[right];
      }




    }

      printtree( allnodes[0],0);
      string inorder=" ";
       string preorder=" ";
        string postorder=" ";
      inOrder(allnodes[0],inorder);
       preOrder(allnodes[0],preorder);
        postOrder(allnodes[0],postorder);
      cout << "inorder traversal "<< inorder << endl;
           cout << "preorder traversal "<< preorder << endl;
                cout << "postorder traversal "<< postorder << endl;



    return 0;
}
