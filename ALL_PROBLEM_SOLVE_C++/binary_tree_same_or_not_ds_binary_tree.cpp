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
            //cout << chkNode->data <<" ";

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

bool isSame(treenode* allnodes, treenode* allnodes2)

{

    string inorder=" ";
       string preorder=" ";
        string postorder=" ";
      inOrder(allnodes,inorder);
       preOrder(allnodes,preorder);
        postOrder(allnodes,postorder);

    string levelorder=" ";
      //  cout << "level order traversal " << endl;
        levelOrderTraversal(allnodes,levelorder);



         string inorder2=" ";
       string preorder2=" ";
        string postorder2=" ";
      inOrder(allnodes2,inorder2);
       preOrder(allnodes2,preorder2);
        postOrder(allnodes2,postorder2);
    string levelordera=" ";

        levelOrderTraversal(allnodes,levelordera);

        if ( inorder2==inorder && preorder2==preorder && postorder2==postorder )
        {

            return true;
        }
        else
        {
           // cout << "These two binary trees are not the same."<< endl;
            return false;
        }



}

int main()
{
    /*
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






        int nn;
    cin >> nn;
    treenode* allnodes2[nn];
    for (int i=0;i< nn;i++)
    {
        allnodes2[i]=new treenode(-1);

    }

     for (int i=0;i< nn;i++)
    {
      int values, lefts, rights;
      cin >> values >> lefts >> rights;
      allnodes2[i]->data=values;

      if (lefts > n-1 || rights > n-1)
      {
          cout <<" invalid index " << endl;
          break;
      }

      if (lefts !=-1)
      {
allnodes2[i]->leftchild= allnodes2[lefts];
      }


      if (rights !=-1)
      {
allnodes2[i]->rightchild= allnodes2[rights];
      }




    }
    */

    treenode* root=new treenode(1);

treenode* a=new treenode(2);

treenode* b=new treenode(3);


root->leftchild=a;
root->rightchild=b;


 treenode* root1=new treenode(1);

treenode* a1=new treenode(2);

treenode* b1=new treenode(3);


root1->leftchild=a1;
root1->rightchild=b1;

   // bool res=isSame(allnodes[0],allnodes2[0]);
      bool res=isSame(root,root1);
    //
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


