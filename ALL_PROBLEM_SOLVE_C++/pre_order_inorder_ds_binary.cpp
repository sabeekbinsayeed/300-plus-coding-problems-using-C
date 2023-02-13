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
int Search(int inorder[],int current, int start, int end)
{
    for (int i=start;i<=end;i++ )
    {
if (inorder[i]==current)
{
    return i;

}

    }
    return -1;
}

treenode* buildtreeNode(int preorder[],int inorder[],int start, int end)
{
    static int id=0;

    int current=preorder[id];

    id++;
    treenode* newnode=new treenode(current);

    if (start==end)
    {
        return newnode;
    }
     int pos= Search (inorder,current,start,end);


    newnode->leftchild=buildtreeNode(preorder,inorder, start, pos-1);
     newnode->rightchild=buildtreeNode(preorder,inorder, pos+1, end);

     return newnode;
}
void levelOrderTraversal(treenode* root, string &chk)
{
    if (root==NULL)
        return ;

    int level=0;
    queue<treenode*> q;
    q.push(root);
    q.push(NULL);

    while (! q.empty())
    {
        treenode* chkNode= q.front();
        q.pop();
        if (chkNode!=NULL)
        {
            cout << chkNode->data <<" ";

            stringstream ss;
ss << chkNode->data;
string s=ss.str();
     chk += s;

            if (chkNode->leftchild!=NULL)
            {
                q.push(chkNode->leftchild);
            }

            if (chkNode->rightchild!=NULL)
            {
                q.push(chkNode->rightchild);
            }
        }
        else
        {

            if (!q.empty())
            {
                q.push(NULL);
                level=level+1;
            }
        }
    }


}



int max_find_levelOrderTraversal(treenode* root, string &chk,int k)
{
    if (root==NULL)
        return -1;

    int level=0;
    int max=-99999;
    queue<treenode*> q;
    q.push(root);
    q.push(NULL);

    while (! q.empty())
    {
        treenode* chkNode= q.front();
        q.pop();
        if (chkNode!=NULL)
        {
            if (level==k)
            {
                if (chkNode->data > max)
                {
                    max=chkNode->data;
                }
            }
            cout << chkNode->data <<" ";

            stringstream ss;
ss << chkNode->data;
string s=ss.str();
     chk += s;

            if (chkNode->leftchild!=NULL)
            {
                q.push(chkNode->leftchild);
            }

            if (chkNode->rightchild!=NULL)
            {
                q.push(chkNode->rightchild);
            }
        }
        else
        {

            if (!q.empty())
            {
                q.push(NULL);
                level=level+1;
            }
        }
    }

return max;
}

void print_leaves(treenode* root)
{
     if (root==NULL)
        return ;

      if (root->leftchild==NULL && root->rightchild==NULL)
      {
          cout << root-data << " ";
          return ;
      }
      print_leaves(root->leftchild);
      print_leaves(root->rightchild);

}

void print_left_nonleaves(treenode* root)
{
     if (root==NULL)
        return ;


  if (root->leftchild!=NULL)
  {
      cout << root->data << endl;
      print_left_nonleaves(root->leftchild);

  }

   if (root->rightchild!=NULL)
  {
cout << root->data << endl;
      print_left_nonleaves(root->rightchild);
  }

}
void print_right_nonleaves(treenode* root)
{
 if (root==NULL)
        return ;


}

void boundary_traversal(treenode* root)
{

    if (root==NULL)
        return ;
    cout << root->data << " ";
    // left non leave
   print_left_nonleaves (root->leftchild);

    // left leave
    print_leaves(root->leftchild);

    //right leave
    print_leaves(root->rightchild);

    //right non leave
    print_right_nonleaves(root->rightchild);


}



int main()
{
    int n;
    cin >> n;
    int preorder[n],inorder[n];
    for (int i=0;i< n;i++)
    {
cin >> preorder[i];
    }

    for (int i=0;i<n;i++)
    {
        cin >> inorder[i];
    }

    treenode* root= buildtreeNode (preorder,inorder, 0, n-1);
      string prechk;
    preOrder(root,prechk);
    cout << "preorder" << prechk << endl;



    return 0;
}


