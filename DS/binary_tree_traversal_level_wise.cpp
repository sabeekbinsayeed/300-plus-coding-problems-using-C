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
        string levelorder=" ";
      inOrder(allnodes[0],inorder);
       preOrder(allnodes[0],preorder);
        postOrder(allnodes[0],postorder);
        cout << "level order traversal " << endl;
        levelOrderTraversal(allnodes[0],levelorder);
       int max_at_k= max_find_levelOrderTraversal(allnodes[0],levelorder,2);
        cout << endl;
      cout << "inorder traversal "<< inorder << endl;
           cout << "preorder traversal "<< preorder << endl;
                cout << "postorder traversal "<< postorder << endl;
                cout << "max value at k " << max_at_k << endl;



    return 0;
}

